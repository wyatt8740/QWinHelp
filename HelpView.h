/* Help view class definition.

   Copyright (C) 2010 rel-eng

   This file is part of QWinHelp.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

#ifndef HELPVIEW_H_
#define HELPVIEW_H_

#include <QObject>
#include <QWebView>

#include "HelpAccessManager.h"
#include "ThreadedWinHelpFileLoader.h"

class HelpView : public QWebView
{
    Q_OBJECT
public:
    HelpView(ThreadedWinHelpFileLoader &winHelpFileLoader);
    virtual ~HelpView();
};

#endif /* HELPVIEW_H_ */