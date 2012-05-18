/****************************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/
**
** This file is part of the test suite of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef TST_MISSINGSTORAGE_H
#define TST_MISSINGSTORAGE_H

#include <QtTest/QtTest>
#include <QtGlobal>

#include <QContact>
#include <QContactAbstractRequest>
#include <QContactFetchRequest>
#include <QContactFetchByIdRequest>
#include <QContactIdFetchRequest>
#include <QContactRemoveRequest>
#include <QContactSaveRequest>

#include "qcontactengineid.h"
#include "qcontactjsondbid.h"

#include "jsondbprocess.h"

QTCONTACTS_USE_NAMESPACE

class tst_StoragesLocationsMissing : public QObject
{
    Q_OBJECT

public:
    tst_StoragesLocationsMissing();
    virtual ~tst_StoragesLocationsMissing();

public slots:
    void initTestCase();
    void cleanupTestCase();
    void init();

private slots:

    void fetch();
    void fetch_data() {fetchData();}

    void idFetch();
    void idFetch_data() {fetchData();}

    void fetchById();
    void fetchById_data() {idData();}

    void fetchByIds();
    void fetchByIds_data() {idsData();}

    void removeById();
    void removeById_data() {idData();}

    void removeByIds();
    void removeByIds_data() {idsData();}

    void save();
    void save_data() {saveData();}

private:
    void fetchData();
    void idData();
    void idsData();
    void saveData();

    QContactManager::Error errorFromManager(QContactAbstractRequest &request, QContactManager *cm);
    QList<QContact> makeTestContactsForSave();
    QContactManager *m_contactManager;

    JsonDbProcess m_jsondbProcess;
};

#endif