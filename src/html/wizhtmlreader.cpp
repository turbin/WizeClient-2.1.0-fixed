#include "wizhtmlreader.h"
#include "share/wizmisc.h"

#include <QChar>

const COLORREF CWizHtmlElemAttr::_clrInvalid = (COLORREF)0xFFFFFFFF;
const unsigned short CWizHtmlElemAttr::_percentMax = USHRT_MAX;

CWizHtmlElemAttr::CNamedColors CWizHtmlElemAttr::_namedColors;


class CWizHtmlEntityResolver
{
private:
    class CCharEntityRefs : public std::map<CString, unsigned char>
    {
    public:
        CCharEntityRefs()
        {
            /** C0 Controls and Basic Latin */
            (*this)[_T("quot")]		= _T('\x22');
            (*this)[_T("amp")]		= _T('\x26');
            (*this)[_T("apos")]		= _T('\x27');
            (*this)[_T("lt")]		= _T('\x3C');
            (*this)[_T("gt")]		= _T('\x3E');
            /** ISO 8859-1 (Latin-1) characters */
            (*this)[_T("nbsp")]		= _T('\xA0');
            (*this)[_T("iexcl")]	= _T('\xA1');
            (*this)[_T("cent")]		= _T('\xA2');
            (*this)[_T("pound")]	= _T('\xA3');
            (*this)[_T("current")]	= _T('\xA4');
            (*this)[_T("yen")]		= _T('\xA5');
            (*this)[_T("brvbar")]	= _T('\xA6');
            (*this)[_T("sect")]		= _T('\xA7');
            (*this)[_T("uml")]		= _T('\xA8');
            (*this)[_T("copy")]		= _T('\xA9');
            (*this)[_T("ordf")]		= _T('\xAA');
            (*this)[_T("laquo")]	= _T('\xAB');
            (*this)[_T("not")]		= _T('\xAC');
            (*this)[_T("shy")]		= _T('\xAD');
            (*this)[_T("reg")]		= _T('\xAE');
            (*this)[_T("macr")]		= _T('\xAF');
            (*this)[_T("deg")]		= _T('\xB0');
            (*this)[_T("plusmn")]	= _T('\xB1');
            (*this)[_T("sup2")]		= _T('\xB2');
            (*this)[_T("sup3")]		= _T('\xB3');
            (*this)[_T("acute")]	= _T('\xB4');
            (*this)[_T("micro")]	= _T('\xB5');
            (*this)[_T("para")]		= _T('\xB6');
            (*this)[_T("middot")]	= _T('\xB7');
            (*this)[_T("cedil")]	= _T('\xB8');
            (*this)[_T("sup1")]		= _T('\xB9');
            (*this)[_T("ordm")]		= _T('\xBA');
            (*this)[_T("raquo")]	= _T('\xBB');
            (*this)[_T("frac14")]	= _T('\xBC');
            (*this)[_T("frac12")]	= _T('\xBD');
            (*this)[_T("frac34")]	= _T('\xBE');
            (*this)[_T("iquest")]	= _T('\xBF');
            (*this)[_T("Agrave")]	= _T('\xC0');
            (*this)[_T("Aacute")]	= _T('\xC1');
            (*this)[_T("Acirc")]	= _T('\xC2');
            (*this)[_T("Atilde")]	= _T('\xC3');
            (*this)[_T("Auml")]		= _T('\xC4');
            (*this)[_T("Aring")]	= _T('\xC5');
            (*this)[_T("AElig")]	= _T('\xC6');
            (*this)[_T("Ccedil")]	= _T('\xC7');
            (*this)[_T("Egrave")]	= _T('\xC8');
            (*this)[_T("Eacute")]	= _T('\xC9');
            (*this)[_T("Ecirc")]	= _T('\xCA');
            (*this)[_T("Euml")]		= _T('\xCB');
            (*this)[_T("Igrave")]	= _T('\xCC');
            (*this)[_T("Iacute")]	= _T('\xCD');
            (*this)[_T("Icirc")]	= _T('\xCE');
            (*this)[_T("Iuml")]		= _T('\xCF');
            (*this)[_T("ETH")]		= _T('\xD0');
            (*this)[_T("Ntilde")]	= _T('\xD1');
            (*this)[_T("Ograve")]	= _T('\xD2');
            (*this)[_T("Oacute")]	= _T('\xD3');
            (*this)[_T("Ocirc")]	= _T('\xD4');
            (*this)[_T("Otilde")]	= _T('\xD5');
            (*this)[_T("Ouml")]		= _T('\xD6');
            (*this)[_T("times")]	= _T('\xD7');
            (*this)[_T("Oslash")]	= _T('\xD8');
            (*this)[_T("Ugrave")]	= _T('\xD9');
            (*this)[_T("Uacute")]	= _T('\xDA');
            (*this)[_T("Ucirc")]	= _T('\xDB');
            (*this)[_T("Uuml")]		= _T('\xDC');
            (*this)[_T("Yacute")]	= _T('\xDD');
            (*this)[_T("THORN")]	= _T('\xDE');
            (*this)[_T("szlig")]	= _T('\xDF');
            (*this)[_T("agrave")]	= _T('\xE0');
            (*this)[_T("aacute")]	= _T('\xE1');
            (*this)[_T("acirc")]	= _T('\xE2');
            (*this)[_T("atilde")]	= _T('\xE3');
            (*this)[_T("auml")]		= _T('\xE4');
            (*this)[_T("aring")]	= _T('\xE5');
            (*this)[_T("aelig")]	= _T('\xE6');
            (*this)[_T("ccedil")]	= _T('\xE7');
            (*this)[_T("egrave")]	= _T('\xE8');
            (*this)[_T("eacute")]	= _T('\xE9');
            (*this)[_T("ecirc")]	= _T('\xEA');
            (*this)[_T("euml")]		= _T('\xEB');
            (*this)[_T("igrave")]	= _T('\xEC');
            (*this)[_T("iacute")]	= _T('\xED');
            (*this)[_T("icirc")]	= _T('\xEE');
            (*this)[_T("iuml")]		= _T('\xEF');
            (*this)[_T("eth")]		= _T('\xF0');
            (*this)[_T("ntilde")]	= _T('\xF1');
            (*this)[_T("ograve")]	= _T('\xF2');
            (*this)[_T("oacute")]	= _T('\xF3');
            (*this)[_T("ocirc")]	= _T('\xF4');
            (*this)[_T("otilde")]	= _T('\xF5');
            (*this)[_T("ouml")]		= _T('\xF6');
            (*this)[_T("divide")]	= _T('\xF7');
            (*this)[_T("oslash")]	= _T('\xF8');
            (*this)[_T("ugrave")]	= _T('\xF9');
            (*this)[_T("uacute")]	= _T('\xFA');
            (*this)[_T("ucirc")]	= _T('\xFB');
            (*this)[_T("uuml")]		= _T('\xFC');
            (*this)[_T("yacute")]	= _T('\xFD');
            (*this)[_T("thorn")]	= _T('\xFE');
            (*this)[_T("yuml")]		= _T('\xFF');
        }
    };

    // Constructors
public:
    CWizHtmlEntityResolver()	{ }

    // Operations
public:
    static UINT resolveEntity(const unsigned short* lpszEntity, unsigned short &chSubst)
    {
        ATLASSERT(m_CharEntityRefs.size());

        const unsigned short* lpszBegin = lpszEntity;
        const unsigned short* lpszEnd = ::wiz_strchr(lpszEntity, ';');
        unsigned short	chTemp = 0;

        // entity references always end with a semi-colon ';'
        if (lpszEnd == NULL)
            return (0U);

        // skip leading white-space characters
        while (::wiz_isspace(*lpszBegin))
            lpszBegin = ::wiz_strinc(lpszBegin);

        // remaining string (including semi-colon)
        // must be at least 4 characters in length
        if (lpszEnd - lpszBegin < 3)
            return (0U);

        // entity references always begin with an ampersand '&' symbol
        if (*lpszBegin != _T('&'))
            return (0U);
        lpszBegin = ::wiz_strinc(lpszBegin);

        // numeric (decimal or hexadecimal) entity reference?
        if (*lpszBegin == _T('#'))
        {
            lpszBegin = ::wiz_strinc(lpszBegin);
            chTemp = *lpszBegin;
            int	radix = (::wiz_isdigit(chTemp) ? 10 :
                         (chTemp == _T('x') ||
                          chTemp == _T('X') ? 16 : 0));
            if (radix)
            {
                if (radix == 16)
                    lpszBegin = ::wiz_strinc(lpszBegin);

                unsigned long	ulNum = ::wiz_strtoul(lpszBegin, NULL, radix);
                chSubst = (unsigned short)ulNum;
                lpszEnd = ::wiz_strinc(lpszEnd);
                return (lpszEnd - lpszEntity);
            }
        }

        // character entity reference?
        else
        {
            CString	strKey(lpszBegin, lpszEnd - lpszBegin);

            // because some character entity references are
            // case-sensitive, we must fix them manually
            if (!strKey.CompareNoCase(_T("eth")) ||
                !strKey.CompareNoCase(_T("thorn")))
            {
                if (::wiz_isupper(strKey[0]))
                    strKey.MakeUpper();
                else
                    strKey.MakeLower();
            }
            else if (!strKey.CompareNoCase(_T("Oslash")))
            {
                strKey.MakeLower();
                strKey.SetAt(0, _T('O'));
            }
            else if (!strKey.CompareNoCase(_T("AElig")))
            {
                strKey.MakeLower();
                strKey.SetAt(0, _T('A'));
                strKey.SetAt(1, _T('E'));
            }
            else
            {
                CString	strT = strKey.Mid(1);
                strKey.MakeLower();
                if (strT.CompareNoCase(_T("grave")) == 0 ||
                    strT.CompareNoCase(_T("acute")) == 0 ||
                    strT.CompareNoCase(_T("circ"))  == 0 ||
                    strT.CompareNoCase(_T("uml"))   == 0 ||
                    strT.CompareNoCase(_T("tilde")) == 0 ||
                    strT.CompareNoCase(_T("cedil")) == 0 ||
                    strT.CompareNoCase(_T("ring"))  == 0)
                {
                    strKey.SetAt(0, strT[0]);
                }
            }

            // is this a known entity reference?
            CCharEntityRefs::const_iterator it = m_CharEntityRefs.find(strKey);
            if (it != m_CharEntityRefs.end())
            {
                chTemp = QChar(it->second).unicode();
                chSubst = chTemp;
                lpszEnd = ::wiz_strinc(lpszEnd);
                return (lpszEnd - lpszEntity);
            }
        }

        return (0U);
    }

    // Data Members
private:
    static CCharEntityRefs	m_CharEntityRefs;
};



CWizHtmlEntityResolver::CCharEntityRefs CWizHtmlEntityResolver::m_CharEntityRefs;



//////////////////////////////////////////////////////////////////////////////////////////////////////



CWizHtmlElemAttr::CWizHtmlElemAttr(const CString& strAttribName, const CString& strAttribValue )
{
    Init();
    m_strAttrName = strAttribName;
    m_strAttrValue = strAttribValue;
}

CWizHtmlElemAttr::CWizHtmlElemAttr(const CWizHtmlElemAttr &rSource)
{
    Init();
    m_strAttrName = rSource.m_strAttrName;
    m_strAttrValue = rSource.m_strAttrValue;
}
void CWizHtmlElemAttr::Init(void)
{
    if (_namedColors.size())
        return;

    /** 28 system colors */
    /*
    _namedColors["activeborder"]		= (COLORREF)0x8000000A;
    _namedColors["activecaption"]		= (COLORREF)0x80000002;
    _namedColors["appworkspace"]		= (COLORREF)0x8000000C;
    _namedColors["background"]			= (COLORREF)0x80000001;
    _namedColors["buttonface"]			= (COLORREF)0x8000000F;
    _namedColors["buttonhighlight"]		= (COLORREF)0x80000014;
    _namedColors["buttonshadow"]		= (COLORREF)0x80000010;
    _namedColors["buttontext"]			= (COLORREF)0x80000012;
    _namedColors["captiontext"]			= (COLORREF)0x80000009;
    _namedColors["graytext"]			= (COLORREF)0x80000011;
    _namedColors["highlight"]			= (COLORREF)0x8000000D;
    _namedColors["highlighttext"]		= (COLORREF)0x8000000E;
    _namedColors["inactiveborder"]		= (COLORREF)0x8000000B;
    _namedColors["inactivecaption"]		= (COLORREF)0x80000003;
    _namedColors["inactivecaptiontext"]	= (COLORREF)0x80000013;
    _namedColors["infobackground"]		= (COLORREF)0x80000018;
    _namedColors["infotext"]			= (COLORREF)0x80000017;
    _namedColors["menu"]				= (COLORREF)0x80000004;
    _namedColors["menutext"]			= (COLORREF)0x80000007;
    _namedColors["scrollbar"]			= (COLORREF)0x80000000;
    _namedColors["threeddarkshadow"]	= (COLORREF)0x80000015;
    _namedColors["threedface"]			= (COLORREF)0x8000000F;
    _namedColors["threedhighlight"]		= (COLORREF)0x80000014;
    _namedColors["threedlightshadow"]	= (COLORREF)0x80000016;
    _namedColors["threedshadow"]		= (COLORREF)0x80000010;
    _namedColors["window"]				= (COLORREF)0x80000005;
    _namedColors["windowframe"]			= (COLORREF)0x80000006;
    _namedColors["windowtext"]			= (COLORREF)0x80000008;
    */

    /** 16 basic colors */
    _namedColors["black"]				= RGB(0x00, 0x00, 0x00);
    _namedColors["gray"]				= RGB(0x80, 0x80, 0x80);
    _namedColors["silver"]				= RGB(0xC0, 0xC0, 0xC0);
    _namedColors["white"]				= RGB(0xFF, 0xFF, 0xFF);
    _namedColors["yellow"]				= RGB(0xFF, 0xFF, 0x00);
    _namedColors["olive"]				= RGB(0x80, 0x80, 0x00);
    _namedColors["red"]					= RGB(0xFF, 0x00, 0x00);
    _namedColors["maroon"]				= RGB(0x80, 0x00, 0x00);
    _namedColors["fuchsia"]				= RGB(0xFF, 0x00, 0xFF);
    _namedColors["purple"]				= RGB(0x80, 0x00, 0x80);
    _namedColors["blue"]				= RGB(0x00, 0x00, 0xFF);
    _namedColors["navy"]				= RGB(0x00, 0x00, 0x80);
    _namedColors["aqua"]				= RGB(0x00, 0xFF, 0xFF);
    _namedColors["teal"]				= RGB(0x00, 0x80, 0x80);
    _namedColors["lime"]				= RGB(0x00, 0xFF, 0x00);
    _namedColors["green"]				= RGB(0x00, 0x80, 0xFF);

    /** additional named colors */
    _namedColors["darkolivegreen"]		= RGB(0x55, 0x6B, 0x2F);
    _namedColors["olivedrab"]			= RGB(0x6B, 0x8E, 0x23);
    _namedColors["yellowgreen"]			= RGB(0x9A, 0xCD, 0x32);
    _namedColors["lawngreen"]			= RGB(0x7C, 0xFC, 0x00);
    _namedColors["chartreuse"]			= RGB(0x7F, 0xFF, 0x00);
    _namedColors["greenyellow"]			= RGB(0xAD, 0xFF, 0x2F);
    _namedColors["palegreen"]			= RGB(0x98, 0xFB, 0x98);
    _namedColors["lightgreen"]			= RGB(0x90, 0xEE, 0x90);
    _namedColors["darkgreen"]			= RGB(0x00, 0x64, 0x00);
    _namedColors["forestgreen"]			= RGB(0x22, 0x8B, 0x22);
    _namedColors["seagreen"]			= RGB(0x2E, 0x8B, 0x57);
    _namedColors["mediumseagreen"]		= RGB(0x3C, 0xB3, 0x71);
    _namedColors["limegreen"]			= RGB(0x32, 0xCD, 0x32);
    _namedColors["darkseagreen"]		= RGB(0x8F, 0xBC, 0x8B);
    _namedColors["springgreen"]			= RGB(0x00, 0xFF, 0x7F);
    _namedColors["mediumspringgreen"]	= RGB(0x00, 0xFA, 0x99);
    _namedColors["darkslategray"]		= RGB(0x2F, 0x4F, 0x4F);
    _namedColors["darkcyan"]			= RGB(0x00, 0x8B, 0x8B);
    _namedColors["cadetblue"]			= RGB(0x5F, 0x9E, 0xA0);
    _namedColors["lightseagreen"]		= RGB(0x20, 0xB2, 0xAA);
    _namedColors["mediumaquamarine"]	= RGB(0x66, 0xCD, 0xAA);
    _namedColors["turquoise"]			= RGB(0x40, 0xE0, 0xD0);
    _namedColors["aquamarine"]			= RGB(0x7F, 0xFF, 0xD4);
    _namedColors["paleturquoise"]		= RGB(0xAF, 0xEE, 0xEE);
    _namedColors["slategray"]			= RGB(0x70, 0x80, 0x90);
    _namedColors["lightslategray"]		= RGB(0x77, 0x88, 0x99);
    _namedColors["steelblue"]			= RGB(0x46, 0x82, 0xB4);
    _namedColors["deepskyblue"]			= RGB(0x00, 0xBF, 0xFF);
    _namedColors["darkturquoise"]		= RGB(0x00, 0xCE, 0xD1);
    _namedColors["mediumturquoise"]		= RGB(0x48, 0xD1, 0xCC);
    _namedColors["powderblue"]			= RGB(0xB0, 0xE0, 0xE6);
    _namedColors["lightcyan"]			= RGB(0xE0, 0xFF, 0xFF);
    _namedColors["darkblue"]			= RGB(0x00, 0x00, 0x8B);
    _namedColors["mediumblue"]			= RGB(0x00, 0x00, 0xCD);
    _namedColors["royalblue"]			= RGB(0x41, 0x69, 0xe1);
    _namedColors["dodgerblue"]			= RGB(0x1E, 0x90, 0xFF);
    _namedColors["cornflowerblue"]		= RGB(0x64, 0x95, 0xED);
    _namedColors["skyblue"]				= RGB(0x87, 0xCE, 0xEB);
    _namedColors["lightskyblue"]		= RGB(0x87, 0xCE, 0xFA);
    _namedColors["lightblue"]			= RGB(0xAD, 0xD8, 0xE6);
    _namedColors["midnightblue"]		= RGB(0x19, 0x19, 0x70);
    _namedColors["darkslateblue"]		= RGB(0x48, 0x3D, 0x8B);
    _namedColors["blueviolet"]			= RGB(0x8A, 0x2B, 0xE2);
    _namedColors["slateblue"]			= RGB(0x6A, 0x5A, 0xCD);
    _namedColors["mediumslateblue"]		= RGB(0x7B, 0x68, 0xEE);
    _namedColors["mediumpurple"]		= RGB(0x93, 0x70, 0xDB);
    _namedColors["lightsteelblue"]		= RGB(0xB0, 0xC4, 0xDE);
    _namedColors["lavender"]			= RGB(0xE6, 0xE6, 0xFA);
    _namedColors["indigo"]				= RGB(0x4B, 0x00, 0x82);
    _namedColors["darkviolet"]			= RGB(0x94, 0x00, 0xD3);
    _namedColors["darkorchid"]			= RGB(0x99, 0x32, 0xCC);
    _namedColors["mediumorchid"]		= RGB(0xBA, 0x55, 0xD3);
    _namedColors["orchid"]				= RGB(0xDA, 0x70, 0xD6);
    _namedColors["violet"]				= RGB(0xEE, 0x82, 0xEE);
    _namedColors["plum"]				= RGB(0xDD, 0xA0, 0xDD);
    _namedColors["thistle"]				= RGB(0xD8, 0xDF, 0xD8);
    _namedColors["darkmagenta"]			= RGB(0x8B, 0x00, 0x8B);
    _namedColors["mediumvioletred"]		= RGB(0xC7, 0x15, 0x85);
    _namedColors["deeppink"]			= RGB(0xFF, 0x14, 0x93);
    _namedColors["palmvioletred"]		= RGB(0xDB, 0x70, 0x93);
    _namedColors["hotpink"]				= RGB(0xFF, 0x69, 0xB4);
    _namedColors["lightpink"]			= RGB(0xFF, 0xB6, 0xC1);
    _namedColors["pink"]				= RGB(0xFF, 0xC0, 0xCB);
    _namedColors["mistyrose"]			= RGB(0xFF, 0xE4, 0xE1);
    _namedColors["brown"]				= RGB(0xA5, 0x2A, 0x2A);
    _namedColors["indianred"]			= RGB(0xCD, 0x5C, 0x5C);
    _namedColors["rosybrown"]			= RGB(0xBC, 0x8F, 0x8F);
    _namedColors["salmon"]				= RGB(0xFA, 0x80, 0x72);
    _namedColors["lightcoral"]			= RGB(0xF0, 0x80, 0x80);
    _namedColors["darksalmon"]			= RGB(0xE9, 0x96, 0x7A);
    _namedColors["lightsalmon"]			= RGB(0xFF, 0xA0, 0x7A);
    _namedColors["peachpuff"]			= RGB(0xFF, 0xDA, 0xB9);
    _namedColors["darkred"]				= RGB(0x8B, 0x00, 0x00);
    _namedColors["firebrick"]			= RGB(0xB2, 0x22, 0x22);
    _namedColors["crimson"]				= RGB(0xDC, 0x14, 0x3C);
    _namedColors["orangered"]			= RGB(0xFF, 0x45, 0x00);
    _namedColors["tomato"]				= RGB(0xFF, 0x63, 0x47);
    _namedColors["coral"]				= RGB(0xFF, 0x7F, 0x50);
    _namedColors["wheat"]				= RGB(0xF5, 0xDE, 0xB3);
    _namedColors["papayawhip"]			= RGB(0xFF, 0xEF, 0xD5);
    _namedColors["sienna"]				= RGB(0xA0, 0x52, 0x2D);
    _namedColors["chocolate"]			= RGB(0xD2, 0x69, 0x1E);
    _namedColors["darkorange"]			= RGB(0xFF, 0x8C, 0x00);
    _namedColors["sandybrown"]			= RGB(0xF4, 0xA4, 0x60);
    _namedColors["orange"]				= RGB(0xFF, 0xA5, 0x00);
    _namedColors["navajowhite"]			= RGB(0xFF, 0xDE, 0xAD);
    _namedColors["moccasin"]			= RGB(0xFF, 0xE4, 0xB5);
    _namedColors["saddlebrown"]			= RGB(0x8B, 0x45, 0x13);
    _namedColors["peru"]				= RGB(0xCD, 0x85, 0x3F);
    _namedColors["burlywood"]			= RGB(0xDE, 0xB8, 0x87);
    _namedColors["tan"]					= RGB(0xD2, 0xB4, 0x8C);
    _namedColors["bisque"]				= RGB(0xFF, 0xE4, 0xC4);
    _namedColors["blanchedalmond"]		= RGB(0xFF, 0xEB, 0xCD);
    _namedColors["antiquewhite"]		= RGB(0xFA, 0xEB, 0xD7);
    _namedColors["darkgoldenrod"]		= RGB(0xB8, 0x86, 0x0B);
    _namedColors["goldenrod"]			= RGB(0xDA, 0xA5, 0x20);
    _namedColors["darkkhaki"]			= RGB(0xBD, 0xB7, 0x6B);
    _namedColors["gold"]				= RGB(0xFF, 0xD7, 0x00);
    _namedColors["khaki"]				= RGB(0xF0, 0xE6, 0x8C);
    _namedColors["palegoldenrod"]		= RGB(0xEE, 0xE8, 0xAA);
    _namedColors["lemonchiffon"]		= RGB(0xFF, 0xFA, 0xCD);
    _namedColors["beige"]				= RGB(0xF5, 0xF5, 0xDC);
    _namedColors["lightgoldenrodyellow"]= RGB(0xFA, 0xFA, 0xD2);
    _namedColors["lightyellow"]			= RGB(0xFF, 0xFF, 0xE0);
    _namedColors["ivory"]				= RGB(0xFF, 0xFF, 0x00);
    _namedColors["cornsilk"]			= RGB(0xFF, 0xF8, 0xDC);
    _namedColors["oldlace"]				= RGB(0xFD, 0xF5, 0xE6);
    _namedColors["florawhite"]			= RGB(0xFF, 0xFA, 0xF0);
    _namedColors["honeydew"]			= RGB(0xF0, 0xFF, 0xF0);
    _namedColors["mintcream"]			= RGB(0xF5, 0xFF, 0xFA);
    _namedColors["azure"]				= RGB(0xF0, 0xFF, 0xFF);
    _namedColors["ghostwhite"]			= RGB(0xF8, 0xF8, 0xFF);
    _namedColors["linen"]				= RGB(0xFA, 0xF0, 0xE6);
    _namedColors["seashell"]			= RGB(0xFF, 0xF5, 0xEE);
    _namedColors["snow"]				= RGB(0xFF, 0xFA, 0xFA);
    _namedColors["dimgray"]				= RGB(0x69, 0x69, 0x69);
    _namedColors["darkgray"]			= RGB(0xA9, 0xA9, 0xA9);
    _namedColors["lightgray"]			= RGB(0xD3, 0xD3, 0xD3);
    _namedColors["gainsboro"]			= RGB(0xDC, 0xDC, 0xDC);
    _namedColors["whitesmoke"]			= RGB(0xF5, 0xF5, 0xF5);
    _namedColors["ghostwhite"]			= RGB(0xF8, 0xF8, 0xFF);
    _namedColors["aliceblue"]			= RGB(0xF0, 0xF8, 0xFF);
}

bool CWizHtmlElemAttr::isNamedColorValue(void) const
{
    if ( (m_strAttrValue.GetLength()) && (::wiz_isalpha(m_strAttrValue[0])) )
    {
        CString		strKey(m_strAttrValue);

        strKey.MakeLower();
        if (_namedColors.find(m_strAttrValue) != _namedColors.end())
            return (true);
    }
    return (false);
}

bool CWizHtmlElemAttr::isSysColorValue(void) const
{
    if ( (m_strAttrValue.GetLength()) && (::wiz_isalpha(m_strAttrValue[0])) )
    {
        COLORREF	crTemp = _clrInvalid;
        CString		strKey(m_strAttrValue);

        strKey.MakeLower();
        CNamedColors::const_iterator it = _namedColors.find(strKey);
        if (it != _namedColors.end())
        {
            crTemp = it->second;
            return ((unsigned int)crTemp >= 0x80000000 && (unsigned int)crTemp <= 0x80000018);
        }
    }
    return (false);
}

bool CWizHtmlElemAttr::isHexColorValue(void) const
{
    // zero-length attribute value?
    if (m_strAttrValue.IsEmpty())
        return (false);

    if (m_strAttrValue[0] == _T('#'))
    {
        if (m_strAttrValue.GetLength() > 1)
        {
            for (int i = 1; i < m_strAttrValue.GetLength(); i++)
            {
                if (!::wiz_isxdigit(m_strAttrValue[i]))
                    return (false);
            }
            return (true);
        }
    }

    return (false);
}

COLORREF CWizHtmlElemAttr::getColorValue(void) const
{
    COLORREF crTemp = _clrInvalid;
    if (isNamedColorValue())
    {
        CString	strKey(m_strAttrValue);
        strKey.MakeLower();
        if (WizMapLookup(_namedColors, strKey, crTemp))
        {
            /*

            // is this a system named color value?
            if ((unsigned int)crTemp >= 0x80000000 && (unsigned int)crTemp <= 0x80000018)
                crTemp = ::WizGetSysColor(crTemp & 0x7FFFFFFF);
                */
        }
    }
    else if (isHexColorValue())
        crTemp = ::wiz_strtoul(m_strAttrValue.Mid(1), NULL, 16);
    return (crTemp);
}

CString CWizHtmlElemAttr::getColorHexValue(void) const
{
    CString	strColorHex;
    if (isHexColorValue())
        strColorHex = m_strAttrValue.Mid(1);
    else
    {
        COLORREF crTemp = getColorValue();
        if (crTemp != _clrInvalid)
            strColorHex.Format(_T("#%06x"), crTemp);
    }
    return (strColorHex);
}
unsigned short CWizHtmlElemAttr::getPercentValue(unsigned short max ) const
{
    ATLASSERT(max > 0);
    if (!isPercentValue())	return (0);
    unsigned short	percentVal = (unsigned short)((short)*this);
    return ((percentVal > max ? max : percentVal));
}

short CWizHtmlElemAttr::getLengthValue(LengthUnitsEnum &rUnit) const
{
    static const char _szUnits[][4] =
    {
        /** relative length units */
        _T("em"), _T("ex"), _T("px"), _T("%"),
        /** absolute length units */
        _T("in"), _T("cm"), _T("mm"), _T("pt"), _T("pc")
    };

    if (m_strAttrValue.IsEmpty())
        return (0);

    //
    size_t i = 0;
    for (i = 0; i < sizeof(_szUnits)/sizeof(_szUnits[0]); i++)
    {
        if (m_strAttrValue.Right(::strlen(_szUnits[i])). \
            CompareNoCase(_szUnits[i]) == 0)
        {
            rUnit = (LengthUnitsEnum)i;
            break;
        }
    }
    if (i == sizeof(_szUnits)/sizeof(_szUnits[0]))
        return (0);
    return (*this);
}

CWizHtmlElemAttr::operator bool () const
{
    if (!m_strAttrValue.CompareNoCase(_T("true")))
        return (true);
    if (!m_strAttrValue.CompareNoCase(_T("false")))
        return (false);
    return (((short)*this ? true : false));
}

void CWizHtmlElemAttr::putValue(const CString& strValue)
{
    m_strAttrValue = strValue;

    m_strAttrValue.Trim();

    // ignore line feeds
    m_strAttrValue.Remove(_T('\n'));

    // replace tab and carriage-return with a single space
    m_strAttrValue.Replace(_T('\r'), _T(' '));
    m_strAttrValue.Replace(_T('\t'), _T(' '));

    /** resolve entity reference(s) */
    int		iCurPos = -1, iParseLen = 0;
    unsigned short	chSubst = 0;
    do
    {
        if ((iCurPos = m_strAttrValue.Find(_T('&'), ++iCurPos)) == -1)
            break;

        iParseLen = CWizHtmlEntityResolver::resolveEntity(m_strAttrValue.Mid(iCurPos), chSubst);
        if (iParseLen)
        {
            m_strAttrValue.Replace
                    (
                            m_strAttrValue.Mid(iCurPos, iParseLen),
                            CString(chSubst)
                            );
        }
    }
    while (true);
}


UINT CWizHtmlElemAttr::parseFromStr(const unsigned short* lpszString)
{
    const unsigned short*	lpszBegin = lpszString;
    const unsigned short*	lpszEnd;
    unsigned short	ch = 0;

    // skip leading white-space characters
    while (::wiz_isspace(*lpszBegin))
        lpszBegin = ::wiz_strinc(lpszBegin);

    // name doesn't begin with an alphabet?
    if (!::wiz_isalpha(*lpszBegin))
        return (0U);

    lpszEnd = lpszBegin;
    do
    {
        // attribute name may contain letters (a-z, A-Z), digits (0-9),
        // underscores '_', hyphen '-', colons ':', and periods '.'
        if ( (!::wiz_isalnum(*lpszEnd)) &&
             (*lpszEnd != _T('-')) && (*lpszEnd != _T(':')) &&
             (*lpszEnd != _T('_')) && (*lpszEnd != _T('.')) )
        {
            //ATLASSERT(lpszEnd != lpszBegin);
            if (lpszEnd == lpszBegin)
                return (0U);

            // only white-space characters, a null-character, an
            // equal-sign, a greater-than symbol, or a forward-slash
            // can act as the separator between an attribute and its
            // value
            if (*lpszEnd == 0 || ::wiz_isspace(*lpszEnd) ||
                *lpszEnd == _T('=') ||
                *lpszEnd == _T('>') || *lpszEnd == _T('/'))
            {
                break;
            }

            return (0U);	// any other character will fail parsing process
        }

        lpszEnd = ::wiz_strinc(lpszEnd);
    }
    while (true);

    // extract attribute name
    CString	strAttrName(lpszBegin, lpszEnd - lpszBegin);

    if (*lpszEnd != _T('='))
    {
        m_strAttrName = strAttrName;
        m_strAttrValue.Empty();
        return (lpszEnd - lpszString);
    }
    else
    {
        // skip white-space characters after equal-sign
        // and the equal-sign itself
        do {
            lpszEnd = ::wiz_strinc(lpszEnd);
        } while (::wiz_isspace(*lpszEnd));

        lpszBegin = lpszEnd;
        ch = *lpszEnd;

        // is attribute value wrapped in quotes?
        if (ch == _T('\'') || ch == _T('\"'))
        {
            lpszBegin = ::wiz_strinc(lpszBegin);	// skip quote symbol
            do
            {
                lpszEnd = ::wiz_strinc(lpszEnd);
            }
            // Loop until we find the same quote character that
            // was used at the starting of the attribute value.
            // Anything within these quotes is considered valid!
            // NOTE that the entity references are resolved later.
            while (*lpszEnd != 0 && *lpszEnd != ch);
        }

        // open attribute value i.e. not wrapped in quotes?
        else
        {
            do
            {
                lpszEnd = ::wiz_strinc(lpszEnd);
            }
            // loop until we find a tag ending delimeter or any
            // white-space character, or until we reach at the
            // end of the string buffer
            while (*lpszEnd != 0 && !::wiz_isspace(*lpszEnd) &&
                   //*lpszEnd != _T('/') && *lpszEnd != _T('>'));
                   *lpszEnd != _T('>'));
        }

        m_strAttrName = strAttrName;
        if (lpszEnd == lpszBegin)	// empty attribute value?
            m_strAttrValue.Empty();
        else
            // use putValue() instead of direct assignment;
            // this will automatically normalize data before
            // assigning according to the specs and will
            // also resolve entity references!!!
            putValue(CString(lpszBegin, lpszEnd - lpszBegin));

        // calculate and return the count of characters successfully parsed
        return ((lpszEnd - lpszString) +
                (ch == _T('\'') || ch == _T('\"') ? 1 : 0) );
    }

    return (0U);
}
CString CWizHtmlElemAttr::toString()const
{
    if (-1 == m_strAttrValue.Find('"'))
    {
        return m_strAttrName + "=\"" + m_strAttrValue + "\"";
    }
    else
    {
        return m_strAttrName + "='" + m_strAttrValue + "'";
    }
}

////////////////////////////////////////////////////////////////////////////////////////



CWizHtmlAttributes::CWizHtmlAttributes(CWizHtmlAttributes &rSource, bool bCopy)
    : m_parrAttrib(NULL)
{
    if (!bCopy)
    {
        m_parrAttrib = rSource.m_parrAttrib;
        rSource.m_parrAttrib = NULL;
    }
    else
    {
        const int	nElemCount = rSource.getCount();
        if (nElemCount)
        {
            m_parrAttrib = new CElemAttrArray();

            CWizHtmlElemAttr	*pItem = NULL;

            /** DEEP COPY BEGIN */
            for (int iElem = 0; iElem < nElemCount; iElem++)
            {
                if ((pItem = new CWizHtmlElemAttr(rSource[iElem])) == NULL)
                {
                    removeAll();
                    return;
                }
                m_parrAttrib->push_back(pItem);
                pItem = NULL;
            }
            /** DEEP COPY END */
        }
    }
}

UINT parseFromStr(const unsigned short* lpszString);

int CWizHtmlAttributes::getCount(void) const
{
    if (m_parrAttrib != NULL)
        return (m_parrAttrib->size());
    return (0);
}

int CWizHtmlAttributes::getIndexFromName(const CString& strAttributeName) const
{
    CWizHtmlElemAttr	*pItem = NULL;
    for (int iElem = 0; iElem < getCount(); iElem++)
    {
        if ((pItem = (*m_parrAttrib)[iElem]) == NULL)	// just in case
            continue;

        // perform a CASE-INSENSITIVE search
        if (pItem->m_strAttrName.CompareNoCase(strAttributeName) == 0)
            return (iElem);
    }
    return (-1);
}

CWizHtmlElemAttr CWizHtmlAttributes::operator[](int nIndex) const
{
    if (!(nIndex >= 0 && nIndex < getCount()))
    {
        return (CWizHtmlElemAttr());
    }
    //
    return ( *((*m_parrAttrib)[nIndex]) );
}

CWizHtmlElemAttr* CWizHtmlAttributes::addAttribute(const CString& strName, const CString& strValue)
{
    CWizHtmlElemAttr	*pItem = new CWizHtmlElemAttr(strName, strValue);
    if (pItem != NULL)
    {
        if (m_parrAttrib == NULL)
        {
            if ((m_parrAttrib = new CElemAttrArray) == NULL)
            {
                WIZ_SAFE_DELETE_POINTER(pItem);
                return (NULL);
            }
        }
    }
    //
    m_parrAttrib->push_back(pItem);
    //
    return (pItem);
}

void CWizHtmlAttributes::setValueToName(const CString& strAttributeName, const CString& strValue)
{
    removeAttribute(strAttributeName);
    addAttribute(strAttributeName, strValue);
}


bool CWizHtmlAttributes::removeAttribute(int nIndex)
{
    if (!(nIndex >= 0 && nIndex < getCount()))
        return (false);
    CWizHtmlElemAttr	*pItem = NULL;

    WIZ_SAFE_DELETE_POINTER(pItem);
    //
    m_parrAttrib->erase(m_parrAttrib->begin() + nIndex);
    //
    return (true);
}
bool CWizHtmlAttributes::removeAttribute(const CString& strAttributeName)
{
    return removeAttribute(getIndexFromName(strAttributeName));
}

bool CWizHtmlAttributes::removeAll(void)
{
    CWizHtmlElemAttr	*pItem = NULL;
    for (int iElem = 0; iElem < getCount(); iElem++)
    {

        WIZ_SAFE_DELETE_POINTER(pItem);
    }
    WIZ_SAFE_DELETE_POINTER(m_parrAttrib);
    return (true);
}

UINT CWizHtmlAttributes::parseFromStr(const unsigned short* lpszString)
{
    CElemAttrArray		*pcoll = NULL;
    CWizHtmlElemAttr	oElemAttr;
    const UINT			nStrLen = ::wiz_strlen(lpszString);
    UINT				nRetVal = 0U,
    nTemp = 0U;

    do
    {
        // try to parse an attribute/value
        // pair from the rest of the string
        if (!(nTemp = oElemAttr.parseFromStr(&lpszString[nRetVal])))
        {
            if (!nRetVal)
                goto LError;
            break;
        }

        // collection has not been instantiated until now?
        if (pcoll == NULL)
        {
            // instantiate now
            if ((pcoll = new CElemAttrArray) == NULL)
                // out of memory?
            {
                //TRACE0("(Error) CWizHtmlAttributes::parseFromStr: Out of memory.\n");
                goto LError;
            }
        }

        // add attribute/value pair to collection
        pcoll->push_back(new CWizHtmlElemAttr(oElemAttr));

        // advance seek pointer
        nRetVal += nTemp;
    }

    // do we still have something in the buffer to parse?
    while (nRetVal < nStrLen);

    // collection was never instantiated?
    if (pcoll == NULL)
        goto LError;
    // collection is empty?
    if (pcoll->empty())
        goto LError;
    // current collection could not be emptied?
    if (!removeAll())
        goto LError;

    m_parrAttrib = pcoll;
    pcoll = NULL;
    goto LCleanExit;	// success!

    LError:
    WIZ_SAFE_DELETE_POINTER(pcoll);
    nRetVal = 0U;

    LCleanExit:
    return (nRetVal);
}




const unsigned short* FindRegExpEnd(const unsigned short* p)
{
    while (*p)
    {
        unsigned short ch = *p;
        if (ch == _T('\r') || ch == _T('\n'))
            return p - 1;
        if (ch == _T('/') && *(p - 1) != _T('\\'))
            return p;
        p++;
    }
    return p;
}


inline BOOL IsJavascriptQuotBegin(const unsigned short* p)
{
    const unsigned short ch = *p;
    if (ch != _T('"') && ch != _T('\''))
        return FALSE;
    if (*(p - 1) == _T('\\'))
        return FALSE;
    return TRUE;
}



inline BOOL IsRegExpBegin(const unsigned short* pBegin, const unsigned short* p)
{
    unsigned short ch = *p;
    //
    if (ch != _T('/'))
        return FALSE;
    if (*(p + 1) == _T('/'))		//行注释
        return FALSE;
    if (*(p + 1) == _T('*'))		//快注释
        return FALSE;
    //
    p--;
    while (p >= pBegin)
    {
        ch = *p;
        if (wiz_isspace(ch))
        {
            p--;
            continue;
        }
        if (ch >= _T('a') && ch <= _T('z'))	//除号
            return FALSE;
        if (ch >= _T('A') && ch <= _T('Z'))	//除号
            return FALSE;
        if (ch == _T(')')) //除号
            return FALSE;
        //
        if (ch == '=')
            return TRUE;
        if (ch == '(')
            return TRUE;
        if (ch == ',')
            return TRUE;
        //
        //Unknown
        //
        return FALSE;
    }
    return FALSE;
}

const unsigned short* GetStyleSource(const unsigned short* lpszUnparsed, CString* pstrStyle)
{
    const unsigned short* p = lpszUnparsed;
    while (*p)
    {
        if (*p == _T('<'))
        {
            if (p[1] && p[2] && p[3] && p[4] && p[5] && p[6] && wiz_strnicmp(p + 1, _T("/style"), 6) == 0)
            {
                p += 7;
                while (*p && *p != _T('>'))
                {
                    p++;
                }
                p++;
                break;
            }
        }
        p++;
    }
    ptrdiff_t nLen = p - lpszUnparsed;
    if (pstrStyle)
    {
        *pstrStyle = CString(lpszUnparsed, nLen);
    }
    return p;
}



const unsigned short* WizHTMLFindEndOfQuotInBlockScriptSource(const unsigned short* p, unsigned short chQuot)
{
    const unsigned short* pOld = p;
    while (*p)
    {
        unsigned short ch = *p;
        //
        if (ch == '\\')
        {
            unsigned short chNext = *(p + 1);
            switch (chNext)
            {
            case '\\':
            case '\'':
            case 'b':
            case 'f':
            case 'n':
            case 'r':
            case 't':
            case '/':
            case '"':
                p++;
                break;
            }
        }
        else if (ch == chQuot)
        {
            //TOLOG(WizSubString(pOld, 0, p - pOld));
            return p;
        }
        //
        p++;
    }
    //
    //
    return pOld;
}
const unsigned short* GetScriptSource(const unsigned short* lpszUnparsed, CString* pstrSource, BOOL bVB)
{
    const unsigned short* p = lpszUnparsed;
    while (*p)
    {
        if (*p == _T('<'))
        {
            if ((p[1] && p[2] && p[3] && p[4] && p[5] && p[6] && p[7] && wiz_strnicmp(p + 1, _T("/script"), 7) == 0)
                ||
                (p[1] && p[2] && p[3] && p[4] && p[5] && p[6] && p[7] && p[8] && wiz_strnicmp(p + 1, _T("\\/script"), 8) == 0))
            {//
                p += 8;
                while (*p && *p != _T('>'))
                {
                    p++;
                }
                p++;
                break;
            }
        }
        //
        if (bVB)
        {//vbscript
            if (*p == _T('"'))
            {//VBscript, javascript的引用
                p++;
                int nQuotCount = 1;
                while (*p)
                {
                    if (*p == _T('"') && *(p + 1) == _T('"'))
                    {
                        p++;
                    }
                    else if (*p == _T('"'))
                    {
                        nQuotCount++;
                        if (nQuotCount % 2 == 0)
                        {
                            break;
                        }
                    }
                    p++;
                }
            }
            else if (*p == _T('\''))
            {//vbscript 注释
                p++;
                while (*p && *p != _T('\n') && *p != _T('\r'))
                {
                    p++;
                }
            }
        }
        else
        {//javascript
            if (IsRegExpBegin(lpszUnparsed, p))
            {
                p++;
                p = FindRegExpEnd(p);
            }
            else if (IsJavascriptQuotBegin(p))
            {//javascript的引用
                const unsigned short ch = *p;
                p++;
                p = WizHTMLFindEndOfQuotInBlockScriptSource(p, ch);
            }
            else if (*p == _T('/') && *(p + 1) == _T('/'))
            {//javascript的行注释
                p += 2;
                const unsigned short* lpszCommentsBegin = p;
                while (*p && *p != _T('\n') && *p != _T('\r'))
                {
                    if (*p == _T('-') && *(p + 1) == _T('>'))
                    {
                        CString strLine = CString(lpszCommentsBegin, p - lpszCommentsBegin);
                        if (-1 == strLine.Find(_T("<!--")))
                        {
                            p++;
                            break;
                        }
                    }
                    else if (p[0] && p[1] && p[2] && p[3] && p[4] && p[5] && p[6] && p[7] && wiz_strnicmp(p, _T("</script"), 8) == 0)
                    {
                        p--;	//跳出行注释尾部，因为最后有一个p++，所以需要先减1。
                        break;
                    }
                    p++;
                }
            }
            else if (*p == _T('/') && *(p + 1) == _T('*'))
            {//javascript的块注释
                p += 2;
                while (*p && !(*p == _T('*') && *(p + 1) == _T('/')))
                {
                    p++;
                }
                p++;
            }
        }
        //to next
        p++;
    }
    ptrdiff_t nLen = p - lpszUnparsed;
    if (pstrSource)
    {
        *pstrSource = CString(lpszUnparsed, nLen);
    }

    return p;
}


CWizHtmlTag::CWizHtmlTag(CWizHtmlTag &rSource, bool bCopy)
    : m_pcollAttr(NULL)
    , m_strTagName(rSource.m_strTagName)
    , m_strTag(rSource.m_strTag)
    , m_bIsOpeningTag(rSource.m_bIsOpeningTag)
    , m_bIsClosingTag(rSource.m_bIsClosingTag)
    , m_bModified(false)
{
    if (!bCopy)
    {
        m_pcollAttr = rSource.m_pcollAttr;
        rSource.m_pcollAttr = NULL;
    }
    else if (rSource.m_pcollAttr != NULL)
    {
        m_pcollAttr = new CWizHtmlAttributes(*(rSource.m_pcollAttr), true);
    }
}

UINT CWizHtmlTag::parseFromStr(const unsigned short* lpszString,
                                      bool &bIsOpeningTag,
                                      bool &bIsClosingTag,
                                      bool bParseAttrib /* = true */)
{
    bool				bClosingTag = false;
    bool				bOpeningTag = false;
    CWizHtmlAttributes	*pcollAttr = NULL;
    CString				strTagName;
    UINT				nRetVal = 0U,
    nTemp = 0U;
    bool bExtTag = false;
    //const unsigned short* lpszString = lpszString;
    const unsigned short* lpszBegin = lpszString;
    const unsigned short* lpszEnd = NULL;

    // skip leading white-space characters
    while (::wiz_isspace(*lpszBegin))
        lpszBegin = ::wiz_strinc(lpszBegin);

    // HTML tags always begin with a less-than symbol
    if (*lpszBegin != _T('<'))
        return (0U);

    // skip tag's opening delimeter '<'
    lpszBegin = ::wiz_strinc(lpszBegin);

    // optimization for empty opening tags
    if (*lpszBegin == _T('>'))
    {
        ATLASSERT(strTagName.IsEmpty());
        ATLASSERT(pcollAttr == NULL);
        ATLASSERT(!bClosingTag);
        nRetVal = lpszBegin - lpszString;
        goto LUpdateAndExit;
    }
    //
    if (*lpszBegin == '!'
        && *(lpszBegin + 1) != '-' && *(lpszBegin + 2) != '-')
    {
        bExtTag = true;
    }
    //
    // tag names always begin with an alphabet
    if (!::wiz_isalpha(*lpszBegin)
        && *lpszBegin != '!')
    {
        bClosingTag = (*lpszBegin == _T('/'));
        if (bClosingTag)
            lpszBegin = ::wiz_strinc(lpszBegin);
        else
            return (0U);
    }

    bOpeningTag = !bClosingTag;
    lpszEnd = lpszBegin;
    do
    {
        // tag name may contain letters (a-z, A-Z), digits (0-9),
        // underscores '_', hyphen '-', colons ':', and periods '.'
        //
        int ch = *lpszEnd;
        bool validChar = (wiz_isalnum(ch)
                         || ch == '-'
                         || ch == ':'
                         || ch == '_'
                         || ch == '.');
        if (!validChar && bExtTag)
        {
            validChar = ch == '!'
                        || ch == '['
                        || ch == ']';
        }

        if (!validChar)
        {
            if (lpszEnd == lpszBegin)
            {
                return (0U);
            }

            // only white-space characters, a null-character, a
            // greater-than symbol, or a forward-slash can break
            // a tag name
            //
            unsigned short chEnd = *lpszEnd;
            if (chEnd == 0 || ::wiz_isspace(chEnd) ||
                chEnd == _T('>') ||
                (chEnd == _T('/') && (!bClosingTag))
                )
            {
                break;
            }

            return (0U);	// any other character will fail parsing process
        }

        lpszEnd = ::wiz_strinc(lpszEnd);
    }
    while(true);

    // store tag name for later use
    strTagName = CString(lpszBegin, lpszEnd - lpszBegin);
    //
    if (bExtTag)
    {
        const unsigned short* p = lpszEnd;
        lpszEnd = ::wiz_strstr(p, "/>");
        if (lpszEnd == NULL)
        {
            lpszEnd = ::wiz_strchr(p, '>');
        }
        //
        if (lpszEnd == NULL)
            return (0U);
    }

    // is this a closing tag?
    if (bClosingTag)
    {
        // in a closing tag, there can be only one symbol after
        // tag name, i.e., the tag end delimeter '>'. Anything
        // else will result in parsing failure
        if (*lpszEnd != _T('>'))
            return (0U);

        // skip tag's ending delimeter
        lpszEnd = ::wiz_strinc(lpszEnd);

        ATLASSERT(strTagName.GetLength());
        ATLASSERT(pcollAttr == NULL);
        nRetVal = lpszEnd - lpszString;
        goto LUpdateAndExit;
    }

    // tag contains attribute/value pairs?
    if (*lpszEnd != _T('>'))
    {
        lpszBegin = lpszEnd;
        lpszEnd = NULL;

        // skip white-space characters after tag name
        while (::wiz_isspace(*lpszBegin))
            lpszBegin = ::wiz_strinc(lpszBegin);

        nTemp = 0U;
        if (bParseAttrib)	// parse attribute/value pairs?
        {
            ATLASSERT(pcollAttr == NULL);
            // instantiate collection ...
            pcollAttr = new CWizHtmlAttributes;

            // ... and delegate parsing process
            nTemp = pcollAttr->parseFromStr(lpszBegin);
        }

        if (nTemp == 0)	// attribute/value pair parsing is disabled?
            //	- OR -
            // attribute/value pairs could not be parsed?
        {
            WIZ_SAFE_DELETE_POINTER(pcollAttr);
            if ((lpszEnd = ::wiz_strstr(lpszBegin, _T("/>"))) == NULL)
            {
                if ((lpszEnd = ::wiz_strchr(lpszBegin, _T('>'))) == NULL)
                    return (0U);
            }
        }
        else
        {
            lpszEnd = lpszBegin + nTemp;

            // skip white-space after attribute/value pairs
            while (::wiz_isspace(*lpszEnd))
                lpszEnd = ::wiz_strinc(lpszEnd);

            // tag's ending delimeter could not be found?
            if (*lpszEnd == 0)
            {
                WIZ_SAFE_DELETE_POINTER(pcollAttr);
                return (0U);
            }
        }

        // a tag like this one: <BR/>
        if (*lpszEnd == _T('/'))
        {
            ATLASSERT(bOpeningTag);
            bClosingTag = true;
            lpszEnd = ::wiz_strinc(lpszEnd);
        }
    }

    // HTML tags always end with a greater-than '>' symbol
    if (*lpszEnd != _T('>'))
    {
        WIZ_SAFE_DELETE_POINTER(pcollAttr);
        return (0U);
    }
    else
        lpszEnd = ::wiz_strinc(lpszEnd);

    nRetVal = lpszEnd - lpszString;
    //
    ATLASSERT(nRetVal > 0);
    //
    goto LUpdateAndExit;	// just to show the flow-of-control

    LUpdateAndExit:

    strTagName.Trim();
    if (nRetVal
        && bOpeningTag)
    {
        if (0 == strTagName.CompareNoCase("script"))
        {
            lpszEnd = ::GetScriptSource(lpszEnd, NULL, false);
            //
            nRetVal = lpszEnd - lpszString;
        }
        else if (0 == strTagName.CompareNoCase("style"))
        {
            lpszEnd = ::GetStyleSource(lpszEnd, NULL);
            //
            nRetVal = lpszEnd - lpszString;
        }
    }

    m_bIsClosingTag = bIsClosingTag = bClosingTag;
    m_bIsOpeningTag = bIsOpeningTag = bOpeningTag;
    m_strTagName = strTagName;
    m_strTagName.TrimLeft();
    m_strTagName.TrimRight();	// just-in-case!
    m_strTag = CString(lpszString, nRetVal);
    WIZ_SAFE_DELETE_POINTER(m_pcollAttr);
    m_pcollAttr = pcollAttr;
    pcollAttr = NULL;
    m_bModified = false;

    return (nRetVal);
}

CString CWizHtmlTag::getTag(void)
{
    if (isClosing()
        && !isOpening())
    {
        ATLASSERT(!m_bModified);
        return m_strTag;
    }
    //
    if (m_bModified)
    {
        CString strAttributes;
        if (m_pcollAttr)
        {
            CWizStdStringArray arr;
            for (int i = 0; i < m_pcollAttr->getCount(); i++)
            {
                arr.push_back(m_pcollAttr->getAttribute(i).toString());
            }
            //
            ::WizStringArrayToText(arr, strAttributes, " ");
        }
        m_strTag = WizFormatString2(isClosing() ? "<%1 %2 />" : "<%1 %2>", m_strTagName, strAttributes);
        m_bModified = false;
    }
    //
    return m_strTag;
}

void CWizHtmlTag::setValueToName(const CString& strAttributeName, const CString& strValue)
{
    if (!m_pcollAttr)
    {
        m_pcollAttr = new CWizHtmlAttributes();
    }
    //
    m_bModified = true;
    //
    m_pcollAttr->setValueToName(strAttributeName, strValue);
}

void CWizHtmlTag::removeAttribute(const CString& strAttributeName)
{
    if (!m_pcollAttr)
        return;
    //
    m_bModified = true;
    //
    m_pcollAttr->removeAttribute(strAttributeName);
}


/////////////////////////////////////////////////////////////////

CWizHtmlReader::CWizHtmlReader()
{
    m_bResolveEntities = false;	    // entities are resolved, by default
    m_dwAppData = 0L;	// reasonable default!
    m_dwBufPos = 0L;	// start from the very beginning
    m_dwBufLen = 0L;	// buffer length is unknown yet

    // default is to raise all of the events
    m_eventMask = (EventMaskEnum)(notifyStartStop  |
                                  notifyTagStart   |
                                  notifyTagEnd     |
                                  notifyCharacters |
                                  notifyComment    );

    m_pEventHandler = NULL;	// no event handler is associated
    m_lpszBuffer = NULL;
}


CWizHtmlReader::EventMaskEnum CWizHtmlReader::setEventMask(DWORD dwNewEventMask)
{
    EventMaskEnum	oldMask = m_eventMask;
    m_eventMask = (EventMaskEnum)dwNewEventMask;
    return (oldMask);
}

CWizHtmlReader::EventMaskEnum CWizHtmlReader::setEventMask(DWORD addFlags, DWORD removeFlags)
{
    DWORD	dwOldMask = (DWORD)m_eventMask;
    DWORD	dwNewMask = (dwOldMask | addFlags) & ~removeFlags;
    m_eventMask = (EventMaskEnum)dwNewMask;
    return ((EventMaskEnum)dwOldMask);
}


DWORD CWizHtmlReader::setAppData(DWORD dwNewAppData)
{
    DWORD	dwOldAppData = m_dwAppData;
    m_dwAppData = dwNewAppData;
    return (dwOldAppData);
}
IWizHtmlReaderEvents* CWizHtmlReader::setEventHandler(IWizHtmlReaderEvents* pNewHandler)
{
    IWizHtmlReaderEvents *pOldHandler = m_pEventHandler;
    m_pEventHandler = pNewHandler;
    return (pOldHandler);
}

void CWizHtmlReader::NormalizeCharacters(CString &rCharacters)
{
    //rCharacters.Replace(_T("\r\n"), _T(""));
    //rCharacters.Remove(_T('\n'));
    //rCharacters.Replace(_T('\r'), _T(' '));
    //rCharacters.Replace(_T('\t'), _T(' '));
    UNUSED_ALWAYS(rCharacters);
}


const unsigned short CWizHtmlReader::ReadChar(void)
{
    ATLASSERT(m_lpszBuffer != NULL);
    if (m_dwBufPos >= m_dwBufLen)
        return (0);
    return (m_lpszBuffer[m_dwBufPos++]);
}

const unsigned short CWizHtmlReader::UngetChar(void)
{
    ATLASSERT(m_lpszBuffer != NULL);
    ATLASSERT(m_dwBufPos);
    return (m_lpszBuffer[--m_dwBufPos]);
}

bool CWizHtmlReader::getEventNotify(DWORD dwEvent) const
{
    ATLASSERT(dwEvent == notifyStartStop  ||
              dwEvent == notifyTagStart   ||
              dwEvent == notifyTagEnd     ||
              dwEvent == notifyCharacters ||
              dwEvent == notifyComment);
    if (m_pEventHandler == NULL)
        return (false);
    return ((m_eventMask & dwEvent) == dwEvent);
}

bool CWizHtmlReader::getBoolOption(ReaderOptionsEnum option, bool& bCurVal) const
{
    bool bSuccess = false;

    switch (option)
    {
    case resolveEntities:
        {
            bCurVal = m_bResolveEntities;
            bSuccess = true;
            break;
        }
    default:
        {
            bSuccess = false;
            break;
        }
    }
    return (bSuccess);
}

bool CWizHtmlReader::setBoolOption(ReaderOptionsEnum option, bool bNewVal)
{
    bool bSuccess = false;

    switch (option)
    {
    case resolveEntities:
        {
            m_bResolveEntities = bNewVal;
            bSuccess = true;
            break;
        }
    default:
        {
            bSuccess = false;
            break;
        }
    }
    return (bSuccess);
}

bool CWizHtmlReader::parseComment(QString &rComment)
{
    ATLASSERT(m_lpszBuffer != NULL);
    if (m_dwBufPos + 4 >= m_dwBufLen)
        return false;

    // HTML comments begin with '<!' delimeter and
    // are immediately followed by two hyphens '--'
    if (::wiz_strncmp(&m_lpszBuffer[m_dwBufPos], _T("<!--"), 4))
        return (false);

    const unsigned short*	lpszBegin = &m_lpszBuffer[m_dwBufPos + 4];
    // HTML comments end with two hyphen symbols '--'
    const unsigned short*	lpszEnd = ::wiz_strstr(lpszBegin, _T("--"));

    // comment ending delimeter could not be found?
    if (lpszEnd == NULL)
        // consider everything after current buffer position a comment
    {
        rComment = QString::fromUtf16(lpszBegin);
        m_dwBufPos += (4 + rComment.length());
        return (true);
    }

    QString	strComment = QString::fromUtf16(lpszBegin, lpszEnd - lpszBegin);

    // end of buffer?
    if (lpszEnd + 2 >= m_lpszBuffer + m_dwBufLen)
        return (false);

    // skip white-space characters after comment ending delimeter '--'
    lpszEnd += 2;
    while (::wiz_isspace(*lpszEnd))
        lpszEnd = ::wiz_strinc(lpszEnd);

    // comment has not been terminated properly
    if (*lpszEnd != _T('>'))
        return (false);

    lpszEnd = ::wiz_strinc(lpszEnd);
    m_dwBufPos += (lpszEnd - &m_lpszBuffer[m_dwBufPos]);
    rComment = strComment;
    return (true);
}

bool CWizHtmlReader::parseTag(CWizHtmlTag &rTag,
                              bool &bIsOpeningTag,
                              bool &bIsClosingTag)
{
    ATLASSERT(m_lpszBuffer != NULL);
    if (m_dwBufPos + 3 > m_dwBufLen)
        return false;
    //
    ATLASSERT(m_dwBufPos + 3 <= m_dwBufLen);

    UINT nRetVal = rTag.parseFromStr(&m_lpszBuffer[m_dwBufPos],
                                     bIsOpeningTag, bIsClosingTag);
    if (!nRetVal)
        return (false);

    m_dwBufPos += nRetVal;
    return (true);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////




UINT CWizHtmlReader::parseDocument(void)
{
    ATLASSERT(m_lpszBuffer != NULL);

    bool bAbort = false;			// continue parsing or abort?
    bool bIsClosingTag = false;	// tag parsed is a closing tag?
    bool bIsOpeningTag = false;	// tag parsed is an opening tag?
    QString	strCharacters;			// character data
    QString	strComment;				// comment data
	DWORD	dwCharDataStart = 0L;	// starting position of character data
	DWORD	dwCharDataLen = 0L;		// length of character data
    long lTemp = 0L;				// temporary storage
    unsigned short ch = 0;					// character at current buffer position
    CWizHtmlTag oTag;			// tag information

	if ( (!m_lpszBuffer) || (!m_dwBufLen) )
		return (0U);

	// reset seek pointer to beginning
	ResetSeekPointer();

	// notify event handler about parsing startup
	if (getEventNotify(notifyStartStop))
	{
		bAbort = false;
		m_pEventHandler->BeginParse(m_dwAppData, bAbort);
		if (bAbort)	goto LEndParse;
	}

	// skip leading white-space characters
	while (isWhiteSpace(ReadChar()))
		;
	
	ch = UngetChar();
    while ((ch = ReadChar()) != 0)
	{
		switch (ch)
		{

            // tag starting delimeter?
		case _T('<'):
			{
				UngetChar();
                //
				
                strComment.clear();
				if (!parseComment(strComment))
				{
					bIsOpeningTag = false;
					bIsClosingTag = false;
					if (!parseTag(oTag, bIsOpeningTag, bIsClosingTag))
					{
						++dwCharDataLen;

						// manually advance buffer position
						// because the last call to UngetChar()
						// moved it back one character
						ch = ReadChar();

						break;
					}
				}

				// clear pending notifications
                if ( (dwCharDataLen) || (strCharacters.length()) )
				{
                    strCharacters += QString::fromUtf16(&m_lpszBuffer[dwCharDataStart], dwCharDataLen);
                    //strCharacters = strCharacters.simplified();
					
                    if ( (strCharacters.length()) &&
						 (getEventNotify(notifyCharacters)) )
					{
						bAbort = false;
						m_pEventHandler->Characters(strCharacters, m_dwAppData, bAbort);
						if (bAbort)	goto LEndParse;
					}

                    strCharacters.clear();
				}

				dwCharDataLen = 0L;
				dwCharDataStart = m_dwBufPos;

                if (strComment.length())
				{
					if (getEventNotify(notifyComment))
					{
						bAbort = false;
                        m_pEventHandler->Comment("<!--" + strComment + "-->", m_dwAppData, bAbort);
						if (bAbort)	goto LEndParse;
					}
				}
				else
				{
                    if ( (bIsOpeningTag) && (getEventNotify(notifyTagStart)) )
					{
						bAbort = false;
						m_pEventHandler->StartTag(&oTag, m_dwAppData, bAbort);
						if (bAbort)	goto LEndParse;
					}

					if ( (bIsClosingTag) && (getEventNotify(notifyTagEnd)) )
					{
						bAbort = false;
						m_pEventHandler->EndTag(&oTag, m_dwAppData, bAbort);
						if (bAbort)	goto LEndParse;
					}
				}

				break;
			}

            // entity reference beginning delimeter?
		case _T('&'):
			{
				UngetChar();

				lTemp = 0;
				if (m_bResolveEntities)
                    lTemp = CWizHtmlEntityResolver::resolveEntity(&m_lpszBuffer[m_dwBufPos], ch);
				
				if (lTemp)
				{
                    strCharacters += QString::fromUtf16(&m_lpszBuffer[dwCharDataStart], dwCharDataLen);
                    strCharacters += QChar(ch);
					m_dwBufPos += lTemp;
					dwCharDataStart = m_dwBufPos;
					dwCharDataLen = 0L;
				}
				else
				{
					ch = ReadChar();
					++dwCharDataLen;
				}
				
				break;
			}

            // any other character
		default:
			{
				++dwCharDataLen;
				break;
			}
		}
	}

	// clear pending notifications
    if ( (dwCharDataLen) || (strCharacters.length()) )
	{
        strCharacters += QString::fromUtf16(&m_lpszBuffer[dwCharDataStart], dwCharDataLen);
        strCharacters += QChar(ch);
        //strCharacters = strCharacters.simplified();

        if ( (strCharacters.length()) &&
			 (getEventNotify(notifyCharacters)) )
		{
			bAbort = false;
			m_pEventHandler->Characters(strCharacters, m_dwAppData, bAbort);
			if (bAbort)	goto LEndParse;
		}
	}

    LEndParse:
	// notify event handler about parsing completion
	if (getEventNotify(notifyStartStop))
		m_pEventHandler->EndParse(m_dwAppData, bAbort);

	m_lpszBuffer = NULL;
	m_dwBufLen = 0L;
	return (m_dwBufPos);
}

UINT CWizHtmlReader::Read(const QString& strHtml)
{
    const unsigned short* lpszString = strHtml.utf16();

    m_dwBufLen = strHtml.length();
    if (m_dwBufLen) {
		m_lpszBuffer = lpszString;
        return parseDocument();
	}

	return (0U);
}
