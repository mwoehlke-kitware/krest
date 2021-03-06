/* This file is part of Krest, and is distributed under the OSI-approved BSD
 * 3-Clause License. See top-level LICENSE file or
 * https://github.com/Kitware/krest/blob/master/LICENSE for details. */

#ifndef krest_core_KwiverTrackSource_hpp
#define krest_core_KwiverTrackSource_hpp

#include <krest/core/Export.h>

#include <krest/core/AbstractDataSource.hpp>

#include <qtGlobal.h>

namespace krest
{

namespace core
{

class KwiverTrackSourcePrivate;

// ============================================================================
class KREST_CORE_EXPORT KwiverTrackSource : public AbstractDataSource
{
  Q_OBJECT

public:
  explicit KwiverTrackSource(QObject* parent = nullptr);
  ~KwiverTrackSource() override;

  bool active() const override;
  bool readData(QUrl const& uri) override;

protected:
  QTE_DECLARE_PRIVATE_RPTR(KwiverTrackSource)

private:
  QTE_DECLARE_PRIVATE(KwiverTrackSource)
};

} // namespace core

} // namespace krest

#endif
