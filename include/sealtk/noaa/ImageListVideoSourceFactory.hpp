/* This file is part of SEAL-TK, and is distributed under the OSI-approved BSD
 * 3-Clause License. See top-level LICENSE file or
 * https://github.com/Kitware/seal-tk/blob/master/LICENSE for details. */

#ifndef sealtk_noaa_ImageListVideoSourceFactory_hpp
#define sealtk_noaa_ImageListVideoSourceFactory_hpp

#include <QObject>
#include <qtGlobal.h>

#include <sealtk/core/KwiverFileVideoSourceFactory.hpp>

namespace sealtk
{

namespace core
{

class VideoController;

}

namespace noaa
{

class ImageListVideoSourceFactoryPrivate;

class ImageListVideoSourceFactory : public core::KwiverFileVideoSourceFactory
{
  Q_OBJECT

public:
  explicit ImageListVideoSourceFactory(
    core::VideoController* parent = nullptr);
  ~ImageListVideoSourceFactory() override;

protected:
  QTE_DECLARE_PRIVATE(ImageListVideoSourceFactory)

  kwiver::vital::config_block_sptr config(QString const& path) const override;

private:
  QTE_DECLARE_PRIVATE_RPTR(ImageListVideoSourceFactory)
};

}

}

#endif
