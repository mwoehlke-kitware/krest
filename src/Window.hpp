/* This file is part of SEAL-TK, and is distributed under the OSI-approved BSD
 * 3-Clause License. See top-level LICENSE file or
 * https://github.com/Kitware/seal-tk/blob/master/LICENSE for details. */

#ifndef SEALTK_Window_hpp
#define SEALTK_Window_hpp

#include <QMainWindow>
#include <qtGlobal.h>

namespace sealtk
{

class WindowPrivate;

class Window : public QMainWindow
{
  Q_OBJECT

public:
  explicit Window(QWidget* parent = nullptr);
  ~Window() override;

protected:
  QTE_DECLARE_PRIVATE_RPTR(Window)

private:
  QTE_DECLARE_PRIVATE(Window)
};

}

#endif
