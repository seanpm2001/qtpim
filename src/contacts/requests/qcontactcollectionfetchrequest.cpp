/****************************************************************************
**
** Copyright (C) 2012 Digia Plc and/or its subsidiary(-ies).
** Copyright (C) 2015 Canonical Ltd
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtContacts module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qcontactcollectionfetchrequest.h"

#include "qcontactrequests_p.h"

QT_BEGIN_NAMESPACE_CONTACTS

/*!
    \class QContactCollectionFetchRequest
    \brief The QContactCollectionFetchRequest class allows a client to asynchronously fetch collections
           from a backend.
    \inmodule QtContacts
    \ingroup contacts-requests

    This request will fetch all the collections stored in the given backend.
 */

/*!
    Constructs a new contact fetch request whose parent is the specified \a parent.
*/
QContactCollectionFetchRequest::QContactCollectionFetchRequest(QObject *parent)
    : QContactAbstractRequest(new QContactCollectionFetchRequestPrivate, parent)
{
}

/*!
    Frees memory in use by this request.
*/
QContactCollectionFetchRequest::~QContactCollectionFetchRequest()
{
}

/*!
    Returns the collections retrieved by this request.
*/
QList<QContactCollection> QContactCollectionFetchRequest::collections() const
{
    Q_D(const QContactCollectionFetchRequest);
    QMutexLocker ml(&d->m_mutex);
    return d->m_collections;
}

#include "moc_qcontactcollectionfetchrequest.cpp"

QT_END_NAMESPACE_CONTACTS
