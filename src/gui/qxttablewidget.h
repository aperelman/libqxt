/****************************************************************************
**
** Copyright (C) Qxt Foundation. Some rights reserved.
**
** This file is part of the QxtCore module of the Qt eXTension library
**
** This library is free software; you can redistribute it and/or modify it
** under the terms of th Common Public License, version 1.0, as published by
** IBM.
**
** This file is provided "AS IS", without WARRANTIES OR CONDITIONS OF ANY
** KIND, EITHER EXPRESS OR IMPLIED INCLUDING, WITHOUT LIMITATION, ANY
** WARRANTIES OR CONDITIONS OF TITLE, NON-INFRINGEMENT, MERCHANTABILITY OR
** FITNESS FOR A PARTICULAR PURPOSE. 
**
** You should have received a copy of the CPL along with this file.
** See the LICENSE file and the cpl1.0.txt file included with the source
** distribution for more information. If you did not receive a copy of the
** license, contact the Qxt Foundation.
** 
** <http://libqxt.sourceforge.net>  <libqxt@gmail.com>
**
****************************************************************************/
#ifndef QXTTABLEWIDGET_H
#define QXTTABLEWIDGET_H

#include <QTableWidget>
#include "qxtpimpl.h"
#include "qxtglobal.h"
#include "qxttablewidgetitem.h"

class QxtTableWidgetPrivate;

class QXT_GUI_EXPORT QxtTableWidget : public QTableWidget
{
	Q_OBJECT
	QXT_DECLARE_PRIVATE(QxtTableWidget);
	friend class QxtTableWidgetItem;

public:
	explicit QxtTableWidget(QWidget* parent = 0);
	explicit QxtTableWidget(int rows, int columns, QWidget* parent = 0);
	virtual ~QxtTableWidget();
	
signals:
	void itemEditingStarted(QTableWidgetItem* item);
	void itemEditingFinished(QTableWidgetItem* item);
	void itemCheckStateChanged(QxtTableWidgetItem* item);
};

#endif // QXTTABLEWIDGET_H