/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QUiLoader_DhClass.h
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:54
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_tools.h>
#include <DhAutohead_tools.h>
#endif

class DhQUiLoader : public DynamicQHandler, public QUiLoader
{
private: 
  static QHash<QByteArray, int> initXhHash();
  static QHash<QByteArray, int> xhHash;
public:
  bool setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr);
  bool unSetDynamicQHandler(char * eventId);
  bool setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr);
  bool unSetDynamicQHandlerud(int udtyp, int eventId);
  void userDefined(int x1) const;
  QVariant* userDefinedVariant(int x1, QVariant* x2) const;
  explicit DhQUiLoader() : DynamicQHandler(), QUiLoader() {};
  explicit DhQUiLoader(QObject* x1) : DynamicQHandler(), QUiLoader(x1) {};
  QAction* createAction();
  QAction* DhcreateAction();
  QAction* DvhcreateAction();
  QAction* createAction(QObject* x1);
  QAction* DhcreateAction(QObject* x1);
  QAction* DvhcreateAction(QObject* x1);
  QAction* createAction(QObject* x1, const QString& x2);
  QAction* DhcreateAction(QObject* x1, const QString& x2);
  QAction* DvhcreateAction(QObject* x1, const QString& x2);
  QActionGroup* createActionGroup();
  QActionGroup* DhcreateActionGroup();
  QActionGroup* DvhcreateActionGroup();
  QActionGroup* createActionGroup(QObject* x1);
  QActionGroup* DhcreateActionGroup(QObject* x1);
  QActionGroup* DvhcreateActionGroup(QObject* x1);
  QActionGroup* createActionGroup(QObject* x1, const QString& x2);
  QActionGroup* DhcreateActionGroup(QObject* x1, const QString& x2);
  QActionGroup* DvhcreateActionGroup(QObject* x1, const QString& x2);
  QLayout* createLayout(const QString& x1);
  QLayout* DhcreateLayout(const QString& x1);
  QLayout* DvhcreateLayout(const QString& x1);
  QLayout* createLayout(const QString& x1, QObject* x2);
  QLayout* DhcreateLayout(const QString& x1, QObject* x2);
  QLayout* DvhcreateLayout(const QString& x1, QObject* x2);
  QLayout* createLayout(const QString& x1, QObject* x2, const QString& x3);
  QLayout* DhcreateLayout(const QString& x1, QObject* x2, const QString& x3);
  QLayout* DvhcreateLayout(const QString& x1, QObject* x2, const QString& x3);
  QWidget* createWidget(const QString& x1);
  QWidget* DhcreateWidget(const QString& x1);
  QWidget* DvhcreateWidget(const QString& x1);
  QWidget* createWidget(const QString& x1, QWidget* x2);
  QWidget* DhcreateWidget(const QString& x1, QWidget* x2);
  QWidget* DvhcreateWidget(const QString& x1, QWidget* x2);
  QWidget* createWidget(const QString& x1, QWidget* x2, const QString& x3);
  QWidget* DhcreateWidget(const QString& x1, QWidget* x2, const QString& x3);
  QWidget* DvhcreateWidget(const QString& x1, QWidget* x2, const QString& x3);
  ~DhQUiLoader(){}
  void childEvent(QChildEvent* x1);
  void DhchildEvent(QChildEvent* x1);
  void DvhchildEvent(QChildEvent* x1);
  void connectNotify(const char* x1);
  void DhconnectNotify(const char* x1);
  void DvhconnectNotify(const char* x1);
  void customEvent(QEvent* x1);
  void DhcustomEvent(QEvent* x1);
  void DvhcustomEvent(QEvent* x1);
  void disconnectNotify(const char* x1);
  void DhdisconnectNotify(const char* x1);
  void DvhdisconnectNotify(const char* x1);
  bool event(QEvent* x1);
  bool Dhevent(QEvent* x1);
  bool Dvhevent(QEvent* x1);
  bool eventFilter(QObject* x1, QEvent* x2);
  bool DheventFilter(QObject* x1, QEvent* x2);
  bool DvheventFilter(QObject* x1, QEvent* x2);
  int receivers(const char* x1) const;
  int Dhreceivers(const char* x1) const;
  int Dvhreceivers(const char* x1) const;
  QObject* sender() const;
  QObject* Dhsender() const;
  QObject* Dvhsender() const;
  void timerEvent(QTimerEvent* x1);
  void DhtimerEvent(QTimerEvent* x1);
  void DvhtimerEvent(QTimerEvent* x1);
};

