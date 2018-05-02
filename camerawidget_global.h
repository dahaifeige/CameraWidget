#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(CAMERAWIDGET_LIB)
#  define CAMERAWIDGET_EXPORT Q_DECL_EXPORT
# else
#  define CAMERAWIDGET_EXPORT Q_DECL_IMPORT
# endif
#else
# define CAMERAWIDGET_EXPORT
#endif
