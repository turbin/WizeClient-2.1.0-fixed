if(WIZNOTE_USE_QT5)
    find_package(Qt5 REQUIRED Core Widgets LinguistTools Xml Network WebKit WebKitWidgets Concurrent)
    get_filename_component(qt_binary_dir ${Qt5_DIR}/../../../bin/ ABSOLUTE)
    get_filename_component(qt_translations_dir ${Qt5_DIR}/../../../translations/ ABSOLUTE)
    set(QT_VERSION ${Qt5_VERSION})
else(WIZNOTE_USE_QT5)
    if(APPLE)
        find_package(Qt4 REQUIRED QtCore QtGui QtXml QtNetwork QtWebKit MacExtras)
    else(APPLE)
        find_package(Qt4 REQUIRED QtCore QtGui QtXml QtNetwork QtWebKit)
    endif(APPLE)

    set(qt_binary_dir ${QT_BINARY_DIR})
    set(qt_translations_dir ${QT_TRANSLATIONS_DIR})
    set(QT_VERSION ${QTVERSION})
    INCLUDE(${QT_USE_FILE})
endif(WIZNOTE_USE_QT5)

set(CMAKE_AUTOMOC ON)

macro(qt_add_translation)
    set(_files)
    foreach(_file ${ARGV})
        if(NOT ${_file} STREQUAL ${ARGV0})
            list(APPEND _files ${_file})
        endif()
    endforeach()

    if(WIZNOTE_USE_QT5)
        qt5_add_translation(${ARGV0} ${_files})
    else(WIZNOTE_USE_QT5)
        qt4_add_translation(${ARGV0} ${_files})
    endif()
endmacro()

macro(qt_add_ui)
    set(_files)
    foreach(_file ${ARGV})
        if(NOT ${_file} STREQUAL ${ARGV0})
            list(APPEND _files ${_file})
        endif()
    endforeach()

    if(WIZNOTE_USE_QT5)
        qt5_wrap_ui(${ARGV0} ${_files})
    else(WIZNOTE_USE_QT5)
        qt4_wrap_ui(${ARGV0} ${_files})
    endif()
endmacro()

macro(qt_add_resources)
    set(_files)
    foreach(_file ${ARGV})
        if(NOT ${_file} STREQUAL ${ARGV0})
            list(APPEND _files ${_file})
        endif()
    endforeach()
    message(STATUS ${_files})

    if(WIZNOTE_USE_QT5)
        qt5_add_resources(${ARGV0} ${_files})
    else(WIZNOTE_USE_QT5)
        qt4_add_resources(${ARGV0} ${_files})
    endif()
endmacro()

macro(qt_use_modules)
    if(WIZNOTE_USE_QT5)
        if(APPLE)
            qt5_use_modules(${ARGV0} Core Gui Widgets Xml Network WebKit WebKitWidgets Concurrent MacExtras)
        else(APPLE)
            qt5_use_modules(${ARGV0} Core Gui Widgets Xml Network WebKit WebKitWidgets Concurrent)
        endif(APPLE)
    else(WIZNOTE_USE_QT5)
        target_link_libraries(${ARGV0} ${QT_LIBRARIES})
    endif()
endmacro()

macro(qt_suppress_warnings)
    if(APPLE)
        set_target_properties(${ARGV0} PROPERTIES
            COMPILE_FLAGS "-Wno-#warnings")
    endif(APPLE)
endmacro()
