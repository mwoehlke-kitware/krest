/* This file is part of Krest, and is distributed under the OSI-approved BSD
 * 3-Clause License. See top-level LICENSE file or
 * https://github.com/Kitware/krest/blob/master/LICENSE for details. */

#ifndef krest_core_DateUtils_hpp
#define krest_core_DateUtils_hpp

#include <krest/core/Export.h>

#include <vital/types/timestamp.h>

#include <QDateTime>

namespace krest
{

namespace core
{

KREST_CORE_EXPORT
QDateTime vitalTimeToQDateTime(kwiver::vital::timestamp::time_t time);

KREST_CORE_EXPORT
kwiver::vital::timestamp::time_t qDateTimeToVitalTime(
  QDateTime const& dateTime);

KREST_CORE_EXPORT
QString dateString(QDateTime const& dateTime);

KREST_CORE_EXPORT
QString dateString(kwiver::vital::timestamp::time_t time);

KREST_CORE_EXPORT
QString timeString(QDateTime const& dateTime);

KREST_CORE_EXPORT
QString timeString(kwiver::vital::timestamp::time_t time);

} // namespace core

} // namespace krest

#endif
