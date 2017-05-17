#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <QString>

//Глобальное
#ifndef APP_NAME
#define APP_NAME "WeldAnalysis"
#endif

#ifndef LINK_FILE
#define LINK_FILE "file:///"
#endif
//

//Пути в ресурсах RES_
#ifndef RES_MANUAL
#define RES_MANUAL ":/Other/UserManual.pdf"
#endif

#ifndef RES_DEVMAN
#define RES_DEVMAN ":/Other/devicemanager.bat"
#endif

#ifndef RES_MAXICON
#define RES_MAXICON ":/GUI/Icons/Other/Maximazed.png"
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
#ifndef ACT_STRETCH
#define ACT_STRETCH "Растянуть"
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

//Имена файлов NAM_
#ifndef NAM_MANUAL
#define NAM_MANUAL "UserManual.pdf"
#endif

#ifndef NAM_DEVMAN
#define NAM_DEVMAN "DeviceManager.bat"
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
//

//Заголовки окон ошибок TIT_
#ifndef TIT_ERCOP
#define TIT_ERCOP "Ошибка копирования"
#endif

#ifndef TIT_ERCREATE
#define TIT_ERCREATE "Ошибка создания"
#endif

#ifndef TIT_BROWSE
#define TIT_BROWSE "Выберите файл"
#endif

#ifndef TIT_SAVE
#define TIT_SAVE "Сохраните файл"
#endif
//

//Фильтры типов файлов FIL_
#ifndef FIL_IMAGE
#define FIL_IMAGE "Image Files (*.png *.jpg *.bmp)"
#endif

//Сообщения ошибок MES_
#ifndef MES_FILE
#define MES_FILE "Файл "
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
#define MES_COPIEDF " скопирован."
#endif
#ifndef MES_COPIEDD
#define MES_COPIEDD " скопирована."
#endif

#ifndef MES_NOTCREATEDF
#define MES_NOTCREATEDF " не был создан. "
#endif
#ifndef MES_NOTCREATEDD
#define MES_NOTCREATEDD " не была создана. "
#endif

#ifndef MES_CREATEDF
#define MES_CREATEDF " создан."
#endif
#ifndef MES_CREATEDD
#define MES_CREATEDD " создана."
#endif

#ifndef MES_SELFBROWSE
#define MES_SELFBROWSE "\nУказать путь вручную?"
#endif

#ifndef MES_SELFCREATE
#define MES_SELFCREATE "\nСоздать самостоятельно?"
#endif

#ifndef MES_TRYAGAIN
#define MES_TRYAGAIN "Попробуйте указать другое имя или папку."
#endif
//

#endif // CONSTANTS_H
