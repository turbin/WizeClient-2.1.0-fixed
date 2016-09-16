#include "wizdownloadobjectdatadialog.h"
#include "ui_wizdownloadobjectdatadialog.h"

#include "QMessageBox"

CWizDownloadObjectDataDialog::CWizDownloadObjectDataDialog(CWizDatabaseManager& dbMgr, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CWizDownloadObjectDataDialog)
    , m_downloader(new CWizDownloadObjectData(dbMgr))
{
    ui->setupUi(this);
    setFixedSize(size());

    ui->progressBar->setRange(0, 100);

    connect(m_downloader, SIGNAL(progressChanged(int)), SLOT(downloader_progress(int)));
    connect(m_downloader, SIGNAL(downloadDone(bool)), SLOT(downloader_done(bool)));
    connect(ui->buttonCancle, SIGNAL(clicked()), SLOT(onButtonCancle_clicked()));
}

CWizDownloadObjectDataDialog::~CWizDownloadObjectDataDialog()
{
    m_downloader->abort();
    delete ui;
}

void CWizDownloadObjectDataDialog::downloadData(const WIZOBJECTDATA& data)
{
    m_bUserCancled = false;

    if (data.strDisplayName.length() > 30) {
        ui->labelDownloading->setText(data.strDisplayName.left(30) + "...");
    } else {
        ui->labelDownloading->setText(data.strDisplayName);
    }

    ui->progressBar->setValue(0);

    m_downloader->setData(data);
    m_downloader->startDownload();
    open();
}

void CWizDownloadObjectDataDialog::onButtonCancle_clicked()
{
    m_bUserCancled = true;
    m_downloader->abort();

    reject();
}

void CWizDownloadObjectDataDialog::downloader_progress(int pos)
{
    ui->progressBar->setValue(pos);
}

void CWizDownloadObjectDataDialog::downloader_done(bool succeeded)
{
    if (succeeded) {
        ui->progressBar->setValue(100);
        accept();
    } else {
        QMessageBox msg;
        msg.setText(tr("wow, download failed! please check your network connection"));
        msg.exec();

        reject();
    }
}
