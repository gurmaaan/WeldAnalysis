#ifndef CONSTANTS_H
#define CONSTANTS_H

//Глобальное
#ifndef APP_NAME
#define APP_NAME "WeldAnalysis"
#endif

#ifndef prntlndbg
#define prntlndbg QString("--------------")
#endif

#ifndef LINK_FILE
#define LINK_FILE "file:///"
#endif

#ifndef MARGIN
#define MARGIN 10
#endif

#ifndef PROGRAMFILES
#define PROGRAMFILES "PROGRAMFILES"
#endif

#ifndef TRAY_DELAY
#define TRAY_DELAY 3000
#endif

#ifndef VID
#define VID "1027"
#endif

#ifndef PID
#define PID "24577"
#endif
//

//Статус бар
#ifndef STATUS_PORT
#define STATUS_PORT "Порт "
#endif

#ifndef STATUS_DELAY
#define STATUS_DELAY 5000
#endif


#ifndef STATUS_PORTINFNULL
#define STATUS_PORTINFNULL "--"
#endif

#ifndef STATUS_CONNECTINFOFF
#define STATUS_CONNECTINFOFF "отключено "
#endif

#ifndef STATUS_CONNECTINFON
#define STATUS_CONNECTINFON "подключено "
#endif

#ifndef STATUS_CONNECT
#define STATUS_CONNECT "Устройство "
#endif
//

//Excel EXCEL_
#ifndef EXCEL_SETROWBEGIN
#define EXCEL_SETROWBEGIN 2
#endif

#ifndef EXCEL_SETROWEND
#define EXCEL_SETROWEND 23
#endif

#ifndef EXCEL_STATROWBEGIN
#define EXCEL_STATROWBEGIN 24
#endif

#ifndef EXCEL_STATROWEND
#define EXCEL_STATROWEND 27
#endif

#ifndef EXCEL_SETSTATCOLBEGIN
#define EXCEL_SETSTATCOLBEGIN 1
#endif

#ifndef EXCEL_SETSTATCOLEND
#define EXCEL_SETSTATCOLEND 2
#endif

#ifndef EXCEL_SETSTATPAGE
#define EXCEL_SETSTATPAGE 2
#endif

#ifndef EXCEL_DATAPAGE
#define EXCEL_DATAPAGE 1
#endif

#ifndef EXCEL_APP
#define EXCEL_APP "Excel.Application"
#endif

#ifndef EXCEL_WORKBOOKS
#define EXCEL_WORKBOOKS "Workbooks"
#endif

#ifndef EXCEL_WORKSHEETS
#define EXCEL_WORKSHEETS "Worksheets"
#endif

#ifndef EXCEL_CELL
#define EXCEL_CELL "Cells(int,int)"
#endif

#ifndef EXCEL_VALUE
#define EXCEL_VALUE "Value"
#endif

#ifndef EXCEL_COLUMNS
#define EXCEL_COLUMNS "Columns"
#endif

#ifndef EXCEL_ROWS
#define EXCEL_ROWS "Rows"
#endif

#ifndef EXCEL_OPEN
#define EXCEL_OPEN "Open(const QString&)"
#endif

#ifndef EXCEL_ITEM
#define EXCEL_ITEM "Item(int)"
#endif

#ifndef EXCEL_COUNT
#define EXCEL_COUNT "Count"
#endif

#ifndef EXCEL_USEDRANGE
#define EXCEL_USEDRANGE "UsedRange"
#endif

#ifndef EXCEL_CLOSE
#define EXCEL_CLOSE "Close()"
#endif

#ifndef EXCEL_QUIT
#define EXCEL_QUIT "Quit()"
#endif

//

//Пути в ресурсах RES_
#ifndef RES_MANUAL
#define RES_MANUAL ":/Other/UserManual.pdf"
#endif

#ifndef RES_DEVMAN
#define RES_DEVMAN ":/Other/devicemanager.bat"
#endif

#ifndef RES_APPICON
#define RES_APPICON ":/GUI/Icons/icon.ico"
#endif

#ifndef RES_MAXICON
#define RES_MAXICON ":/GUI/Icons/Other/Maximazed.png"
#endif

#ifndef RES_MAINICON
#define RES_MAINICON ":/GUI/Icons/MainIcon.png"
#endif

#ifndef RES_SETTINGS
#define RES_SETTINGS ":/GUI/Defaults/Settings.json"
#endif

#ifndef RES_STATISTICS
#define RES_STATISTICS ":/GUI/Defaults/Statistics.json"
#endif

#ifndef RES_EMPTSET
#define RES_EMPTSET ":/GUI/Defaults/EmptySettings.json"
#endif

#ifndef RES_EMPSTAT
#define RES_EMPSTAT ":/GUI/Defaults/EmptyStatistics.json"
#endif
//

//Пункты меню ACT_
#ifndef ACT_MAX
#define ACT_MAX "Растянуть"
#endif

#ifndef ACT_MIN
#define ACT_MIN "Свернуть"
#endif
//

//JSON имена JS_
#ifndef JS_SETTINGS
#define JS_SETTINGS "Settings"
#endif

#ifndef JS_STATISTICS
#define JS_STATISTICS "Statistics"
#endif

#ifndef JS_KEY
#define JS_KEY "Key"
#endif

#ifndef JS_VAL
#define JS_VAL "Value"
#endif
//

//Имена ехе с дровами
#ifndef DRIVER_FTDI
#define DRIVER_FTDI "FTDI.exe"
#endif

#ifndef DRIVER_IVI
#define DRIVER_IVI "IVI.exe"
#endif

#ifndef DRIVER_AGILENT
#define DRIVER_AGILENT "Agilent.msi"
#endif

#ifndef DRIVER_IVIVARIBLE
#define DRIVER_IVIVARIBLE  "IVIROOTDIR"
#endif

#ifndef DRIVER_AGIVARIBLE
#define DRIVER_AGIVARIBLE  "Lib_x64\\msc\\Ag34401.lib"
#endif

#ifndef DRIVER_MESSAGE
#define DRIVER_MESSAGE  "Нажмите для установки "
#endif

#ifndef DRIVER_MESSAGEWAIT
#define DRIVER_MESSAGEWAIT  "Дождитесь 3-х системных уведомлений "
#endif

#ifndef DRIVER_TEXT
#define DRIVER_TEXT  "Драйвер "
#endif

#ifndef DRIVER_URLIVI
#define DRIVER_URLIVI  "http://www.ivifoundation.org/downloads/Shared%20Components/IviSharedComponents64_242.exe"
#endif

#ifndef DRIVER_URLAGI
#define DRIVER_URLAGI  "https://www.keysight.com/main/gated.jspx?lb=1&gatedId=2578767&cc=RU&lc=rus&parentContId=1494698&parentContType=sd&parentNid=-11143.0.00&pageType=SW-Current%20Version|.Win&sd=Y"
#endif

#ifndef DRIVER_URLFTDI
#define DRIVER_URLFTDI  "http://www.ftdichip.com/Drivers/CDM/CDM%20v2.12.26%20WHQL%20Certified.zip"
#endif

#ifndef DRIVER_DOWNTIT
#define DRIVER_DOWNTIT  "Загрузка драйвера  "
#endif

#ifndef DRIVER_DOWNTITYES
#define DRIVER_DOWNTITYES  " началась"
#endif

#ifndef DRIVER_DOWNTITNO
#define DRIVER_DOWNTITNO  " не была начата"
#endif

#ifndef DRIVER_DOWNMESNO
#define DRIVER_DOWNMESNO  "Пожалуйста пройдите по ссылке "
#endif

#ifndef DRIVER_DOWNMESYES
#define DRIVER_DOWNMESYES  "Сейчас драйвер  "
#endif

#ifndef DRIVER_DOWNMESYESRES
#define DRIVER_DOWNMESYESRES " будет установлен с ресурса  "
#endif

#ifndef DRIVER_DOWNMESNOSELF
#define DRIVER_DOWNMESNOSELF  " самостоятельно "
#endif
//

//Имена файлов NAM_
#ifndef NAM_MANUAL
#define NAM_MANUAL "UserManual.pdf"
#endif

#ifndef NAM_DEVMAN
#define NAM_DEVMAN "DeviceManager.bat"
#endif

#ifndef NAM_PLOT
#define NAM_PLOT "plot_"
#endif

#ifndef NAM_DATEFORMAT
#define NAM_DATEFORMAT "dd-MM_yyyy"
#endif

#ifndef NAM_TIMEFORMAT
#define NAM_TIMEFORMAT "hh-mm"
#endif

#ifndef NAM_DATETIMEFORMAT
#define NAM_DATETIMEFORMAT "dd-MM_yyyy_hh-mm"
#endif
//

//Имена файлов со слэшем NAMS_
#ifndef NAMS_MANUAL
#define NAMS_MANUAL "/UserManual.pdf"
#endif

#ifndef NAMS_DEVMAN
#define NAMS_DEVMAN "/DeviceManager.bat"
#endif
//

//Названия папок DIR_
#ifndef DIR_DEFAULTS
#define DIR_DEFAULTS "Defaults"
#endif

#ifndef DIR_BAT
#define DIR_BAT "BAT"
#endif

#ifndef DIR_DRIVERS
#define DIR_DRIVERS "Drivers"
#endif
//

//Заголовки окон ошибок TIT_
#ifndef TIT_ERCOP
#define TIT_ERCOP "Ошибка копирования"
#endif

#ifndef TIT_ERCREATE
#define TIT_ERCREATE "Ошибка создания"
#endif

#ifndef TIT_ERSAVE
#define TIT_ERSAVE "Ошибка сохранения"
#endif

#ifndef TIT_BROWSE
#define TIT_BROWSE "Выберите файл"
#endif

#ifndef TIT_BROWSEDIR
#define TIT_BROWSEDIR "Выберите папку"
#endif

#ifndef TIT_SAVE
#define TIT_SAVE "Сохраните файл "
#endif

#ifndef TIT_SAVED
#define TIT_SAVED "сохранено"
#endif
//

//Фильтры типов файлов FIL_
#ifndef FIL_IMAGE
#define FIL_IMAGE "Image Files (*.png *.jpg *.bmp)"
#endif

#ifndef FIL_PNGEXT
#define FIL_PNGEXT ".png"
#endif

#ifndef FIL_PNGFORMAT
#define FIL_PNGFORMAT "PNG"
#endif
//

//Сообщения ошибок MES_
#ifndef MES_FILE
#define MES_FILE "Файл "
#endif

#ifndef MES_IMG
#define MES_IMG "Изображение "
#endif

#ifndef MES_DIRECTORY
#define MES_DIRECTORY "Директория "
#endif

#ifndef MES_PATH
#define MES_PATH "Путь "
#endif

#ifndef MES_NOTCOPIEDF
#define MES_NOTCOPIEDF " не был скопирован. "
#endif
#ifndef MES_NOTCOPIEDD
#define MES_NOTCOPIEDD " не была скопирована. "
#endif

#ifndef MES_COPIEDF
#define MES_COPIEDF " скопирован. "
#endif
#ifndef MES_COPIEDD
#define MES_COPIEDD " скопирована. "
#endif

#ifndef MES_NOTCREATEDF
#define MES_NOTCREATEDF " не был создан. "
#endif
#ifndef MES_NOTCREATEDD
#define MES_NOTCREATEDD " не была создана. "
#endif

#ifndef MES_CREATEDF
#define MES_CREATEDF " создан. "
#endif
#ifndef MES_CREATEDD
#define MES_CREATEDD " создана. "
#endif

#ifndef MES_SELFBROWSE
#define MES_SELFBROWSE "\nУказать путь вручную? "
#endif

#ifndef MES_SELFCREATE
#define MES_SELFCREATE "\nСоздать самостоятельно? "
#endif

#ifndef MES_CHECKNAME
#define MES_CHECKNAME "\nПопробуйте указать другое имя или папку. "
#endif

#ifndef MES_SUCSAVE
#define MES_SUCSAVE " было успешно сохранено в указанную вами папку. "
#endif
//

//Окно Маткада
#ifndef MAT_REGFOLDER
#define MAT_REGFOLDER "HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall"
#endif

#ifndef MAT_DISPLAYKEY
#define MAT_DISPLAYKEY "DisplayName"
#endif

#ifndef MAT_VERSIONKEY
#define MAT_VERSIONKEY "DisplayVersion"
#endif

#ifndef MAT_PATH
#define MAT_PATH "\\Mathcad\\Mathcad "
#endif

#ifndef MAT_NAME14
#define MAT_NAME14 "Mathcad 14"
#endif

#ifndef MAT_NAME15
#define MAT_NAME15 "Mathcad 15"
#endif

#ifndef MAT_EXENAM
#define MAT_EXENAM "mathcad.exe"
#endif

#ifndef MAT_ERRORTIT
#define MAT_ERRORTIT "MathCad не установлен"
#endif

#ifndef MAT_SUCCESSTIT
#define MAT_SUCCESSTIT "MathCad установлен"
#endif

#ifndef MAT_SUCCESSINF
#define MAT_SUCCESSINF "Установлен"
#endif

#ifndef MAT_ERRORINF
#define MAT_ERRORINF "Не установлен"
#endif

#ifndef MAT_SUCCPROC
#define MAT_SUCCPROC "Программа MathCad запущена"
#endif

#ifndef MAT_ERRPROC
#define MAT_ERRPROC "Не удалось запустить MathCad "
#endif

#ifndef MAT_SUCCESSVERINF
#define MAT_SUCCESSVERINF "Подходит"
#endif

#ifndef MAT_SUCCESSVERENB
#define MAT_SUCCESSVERENB " Версия пригодня для нормальной работы."
#endif

#ifndef MAT_ERRORVERINF
#define MAT_ERRORVERINF "Не подходит"
#endif

#ifndef MAT_VERMES
#define MAT_VERMES "Текущая версия MathCad "
#endif

#ifndef MAT_ERRORMES
#define MAT_ERRORMES "Программе не удалось найти MathCad среди установленных приложений. Установите корректную версию MathCad или переустановите существующую."
#endif

#ifndef MAT_ERRORVERMES
#define MAT_ERRORVERMES " Требуется установленная версия не ниже 14."
#endif

#ifndef MAT_ERRORVERTIT
#define MAT_ERRORVERTIT "Версия MathCad не подходит"
#endif

#ifndef MAT_SUCCESSCOLOR
#define MAT_SUCCESSCOLOR "color: rgb(131, 198, 63)"
#endif

#ifndef MAT_ERRORCOLOR
#define MAT_ERRORCOLOR "color:rgb(199, 0, 0)"
#endif

#ifndef MAT_SUCCESSMES
#define MAT_SUCCESSMES "Готов к работе"
#endif

#endif // CONSTANTS_H
