/* This file is part of Krest, and is distributed under the OSI-approved BSD
 * 3-Clause License. See top-level LICENSE file or
 * https://github.com/Kitware/krest/blob/master/LICENSE for details. */

#ifndef krest_gui_FilterWidget_hpp
#define krest_gui_FilterWidget_hpp

#include <krest/gui/Export.h>

#include <QWidget>

#include <qtGlobal.h>

namespace krest
{

namespace gui
{

class FilterWidgetPrivate;

class KREST_GUI_EXPORT FilterWidget : public QWidget
{
  Q_OBJECT
  Q_PROPERTY(double value READ value WRITE setValue NOTIFY valueChanged)

public:
  explicit FilterWidget(QWidget* parent = nullptr);
  ~FilterWidget();

  enum Mode { LowPass, HighPass };
  void setFilter(int role, Mode mode = LowPass);

  double value() const;

signals:
  void valueChanged(double value);
  void filterChanged(int role, QVariant low, QVariant high);
  void filterMinimumChanged(int role, QVariant low);
  void filterMaximumChanged(int role, QVariant high);

public slots:
  void setMinimum(double minimum);
  void setMaximum(double maximum);
  void setRange(double minimum, double maximum);
  void setValue(double value);

  void setLabel(QString const& text);

protected:
  QTE_DECLARE_PRIVATE_RPTR(FilterWidget)

private:
  QTE_DECLARE_PRIVATE(FilterWidget)
};

} // namespace gui

} // namespace krest

#endif
