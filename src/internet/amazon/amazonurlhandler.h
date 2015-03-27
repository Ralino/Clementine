/* This file is part of Clementine.
   Copyright 2015, John Maguire <john.maguire@gmail.com>

   Clementine is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   Clementine is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with Clementine.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef INTERNET_AMAZON_AMAZONURLHANDLER_H_
#define INTERNET_AMAZON_AMAZONURLHANDLER_H_

#include "core/urlhandler.h"

class AmazonCloudDrive;

class AmazonUrlHandler : public UrlHandler {
  Q_OBJECT
 public:
  explicit AmazonUrlHandler(
      AmazonCloudDrive* service, QObject* parent = nullptr);

  QString scheme() const { return "amazonclouddrive"; }
  QIcon icon() const { return QIcon(":providers/amazonclouddrive.png"); }
  LoadResult StartLoading(const QUrl& url);

 private:
  AmazonCloudDrive* service_;
};

#endif  // INTERNET_AMAZON_AMAZONURLHANDLER_H_
