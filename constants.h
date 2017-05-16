#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <QString>

//Имя программы
#ifndef APP_NAME
#define APP_NAME "WeldAnalysis"
#endif
//

//Пути в ресурсах RES_
#ifndef RES_MANUAL
#define RES_MANUAL ":/Other/UserManual.pdf"
#endif

#ifndef RES_DEVMAN
#define RES_DEVMAN ":/Other/devicemanager.bat"
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
#ifndef DIR_GUI
#define DIR_GUI "GUI"
#endif

#ifndef DIR_BAT
#define DIR_BAT "BAT"
#endif
//

//Заголовки окон ошибок TIT_
#ifndef TIT_COPYING
#define TIT_COPYING "Ошибка копирования"
#endif

#ifndef TIT_CREATING
#define TIT_CREATING "Ошибка создания"
#endif

#ifndef TIT_BROWSE
#define TIT_BROWSE "Выберите файл"
#endif
//

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
//

#endif // CONSTANTS_H
