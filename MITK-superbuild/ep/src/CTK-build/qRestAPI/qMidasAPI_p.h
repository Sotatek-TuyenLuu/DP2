/*==============================================================================

  Library: qRestAPI

  Copyright (c) 2010 Kitware Inc.

  See Doc/copyright/copyright.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Jean-Christophe Fillion-Robin, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __qMidasAPI_p_h
#define __qMidasAPI_p_h

// qMidasAPI includes
#include "qMidasAPI.h"

#include <QList>
#include <QScriptEngine>
#include <QScriptValue>

// --------------------------------------------------------------------------
class qMidasAPIPrivate : public QObject
{
  Q_DECLARE_PUBLIC(qMidasAPI);
  Q_OBJECT

  typedef QObject Superclass;

  qMidasAPI* const q_ptr;
  QScriptEngine ScriptEngine;

  QString ResponseType;

public:
  qMidasAPIPrivate(qMidasAPI* object);
};

// --------------------------------------------------------------------------
class qMidasAPIResult : public QObject
{
  Q_OBJECT
public:
  QUuid QueryUuid;
  QList<QVariantMap> Result;
  QString Error;

public slots:
  void setResult(const QUuid& queryUuid, const QList<QVariantMap>& result);
  void setError(const QUuid& queryUuid, const QString& error);
};

#endif
