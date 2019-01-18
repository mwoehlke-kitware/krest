/* This file is part of SEAL-TK, and is distributed under the OSI-approved BSD
 * 3-Clause License. See top-level LICENSE file or
 * https://github.com/Kitware/seal-tk/blob/master/LICENSE for details. */

#include <QApplication>

#include <sealtk/gui/Player.hpp>
#include <sealtk/gui/PlayerTree.hpp>
#include <sealtk/gui/Resources.hpp>
#include <sealtk/gui/Window.hpp>

//-----------------------------------------------------------------------------
int main(int argc, char** argv)
{
  sealtk::gui::Resources r;
  QApplication app{argc, argv};

  auto* window = new sealtk::gui::Window;
  window->registerPanelType<sealtk::gui::Player>("Player");
  window->registerPanelType<sealtk::gui::PlayerTree>("Players");
  window->show();

  return app.exec();
}
