/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QItemEditorFactory_DhClass.h
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:01:53
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#ifndef dhclassheader
#define dhclassheader
#include <qpointer.h>
#include <dynamicqhandler.h>
#include <DhOther_gui.h>
#include <DhAutohead_gui.h>
#endif

class DhQItemEditorFactory : public DynamicQHandler, public QItemEditorFactory
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
  explicit DhQItemEditorFactory() : DynamicQHandler(), QItemEditorFactory() {};
  explicit DhQItemEditorFactory(const QItemEditorFactory& x1) : DynamicQHandler(), QItemEditorFactory(x1) {};
  QWidget* createEditor(QVariant::Type x1, QWidget* x2) const;
  QWidget* DhcreateEditor(long x1, QWidget* x2) const;
  QWidget* DvhcreateEditor(long x1, QWidget* x2) const;
  QByteArray valuePropertyName(QVariant::Type x1) const;
  QByteArray DhvaluePropertyName(long x1) const;
  QByteArray DvhvaluePropertyName(long x1) const;
  ~DhQItemEditorFactory(){}
};

