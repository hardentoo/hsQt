/////////////////////////////////////////////////////////////////////////////
//      
//      File      : QDialog_DhClass.cpp
//      Copyright : (c) David Harley 2010
//      Project   : qtHaskell
//      Version   : 1.1.4
//      Modified  : 2010-09-02 17:02:00
//      
//      Warning   : this file is machine generated - do not modify.
//      
/////////////////////////////////////////////////////////////////////////////

#include <gui/QDialog_DhClass.h>

void DhQDialog::userDefined(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,0)) (*(void(*)(void*))rf_ptr)(ro_ptr);
}

QVariant* DhQDialog::userDefinedVariant(int x1, QVariant* x2) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSetud(x1,(void*&)ro_ptr,(void*&)rf_ptr,1)) return (QVariant*)(*(void*(*)(void*,void*))rf_ptr)(ro_ptr, (void*)x2);
  return NULL
;}

void DhQDialog::accept() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(0,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDialog::accept();
}

void DhQDialog::Dhaccept() {
  return QDialog::accept();
}

void DhQDialog::Dvhaccept() {
  return accept();
}

void DhQDialog::adjustPosition(QWidget* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(1,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)));
  return QDialog::adjustPosition(x1);
}

void DhQDialog::DhadjustPosition(QWidget* x1) {
  return QDialog::adjustPosition(x1);
}

void DhQDialog::DvhadjustPosition(QWidget* x1) {
  return adjustPosition(x1);
}

void DhQDialog::closeEvent(QCloseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(2,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::closeEvent(x1);
}

void DhQDialog::DhcloseEvent(QCloseEvent* x1) {
  return QDialog::closeEvent(x1);
}

void DhQDialog::DvhcloseEvent(QCloseEvent* x1) {
  return closeEvent(x1);
}

void DhQDialog::contextMenuEvent(QContextMenuEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(3,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::contextMenuEvent(x1);
}

void DhQDialog::DhcontextMenuEvent(QContextMenuEvent* x1) {
  return QDialog::contextMenuEvent(x1);
}

void DhQDialog::DvhcontextMenuEvent(QContextMenuEvent* x1) {
  return contextMenuEvent(x1);
}

void DhQDialog::done(int x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(4,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QDialog::done(x1);
}

void DhQDialog::Dhdone(int x1) {
  return QDialog::done(x1);
}

void DhQDialog::Dvhdone(int x1) {
  return done(x1);
}

bool DhQDialog::event(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(5,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::event(x1);
}

bool DhQDialog::Dhevent(QEvent* x1) {
  return QDialog::event(x1);
}

bool DhQDialog::Dvhevent(QEvent* x1) {
  return event(x1);
}

bool DhQDialog::eventFilter(QObject* x1, QEvent* x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(6,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QPointer<QObject>((QObject*)x1)), (void*)x2);
  return QDialog::eventFilter(x1, x2);
}

bool DhQDialog::DheventFilter(QObject* x1, QEvent* x2) {
  return QDialog::eventFilter(x1, x2);
}

bool DhQDialog::DvheventFilter(QObject* x1, QEvent* x2) {
  return eventFilter(x1, x2);
}

void DhQDialog::keyPressEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(7,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::keyPressEvent(x1);
}

void DhQDialog::DhkeyPressEvent(QKeyEvent* x1) {
  return QDialog::keyPressEvent(x1);
}

void DhQDialog::DvhkeyPressEvent(QKeyEvent* x1) {
  return keyPressEvent(x1);
}

QSize DhQDialog::minimumSizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(8,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDialog::minimumSizeHint();
}

QSize DhQDialog::DhminimumSizeHint() const {
  return QDialog::minimumSizeHint();
}

QSize DhQDialog::DvhminimumSizeHint() const {
  return minimumSizeHint();
}

void DhQDialog::reject() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(10,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDialog::reject();
}

void DhQDialog::Dhreject() {
  return QDialog::reject();
}

void DhQDialog::Dvhreject() {
  return reject();
}

void DhQDialog::resizeEvent(QResizeEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(11,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::resizeEvent(x1);
}

void DhQDialog::DhresizeEvent(QResizeEvent* x1) {
  return QDialog::resizeEvent(x1);
}

void DhQDialog::DvhresizeEvent(QResizeEvent* x1) {
  return resizeEvent(x1);
}

void DhQDialog::setVisible(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(12,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QDialog::setVisible(x1);
}

void DhQDialog::DhsetVisible(bool x1) {
  return QDialog::setVisible(x1);
}

void DhQDialog::DvhsetVisible(bool x1) {
  return setVisible(x1);
}

void DhQDialog::showEvent(QShowEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(13,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QDialog::showEvent(x1);
}

void DhQDialog::DhshowEvent(QShowEvent* x1) {
  return QDialog::showEvent(x1);
}

void DhQDialog::DvhshowEvent(QShowEvent* x1) {
  return showEvent(x1);
}

QSize DhQDialog::sizeHint() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(14,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QSize*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QDialog::sizeHint();
}

QSize DhQDialog::DhsizeHint() const {
  return QDialog::sizeHint();
}

QSize DhQDialog::DvhsizeHint() const {
  return sizeHint();
}

void DhQDialog::actionEvent(QActionEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(16,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::actionEvent(x1);
}

void DhQDialog::DhactionEvent(QActionEvent* x1) {
  return QWidget::actionEvent(x1);
}

void DhQDialog::DvhactionEvent(QActionEvent* x1) {
  return actionEvent(x1);
}

void DhQDialog::changeEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(17,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::changeEvent(x1);
}

void DhQDialog::DhchangeEvent(QEvent* x1) {
  return QWidget::changeEvent(x1);
}

void DhQDialog::DvhchangeEvent(QEvent* x1) {
  return changeEvent(x1);
}

void DhQDialog::create() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(18,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::create();
}

void DhQDialog::Dhcreate() {
  return QWidget::create();
}

void DhQDialog::Dvhcreate() {
  return create();
}

void DhQDialog::create(WId x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(19,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::create(x1);
}

void DhQDialog::Dhcreate(WId x1) {
  return QWidget::create(x1);
}

void DhQDialog::Dvhcreate(WId x1) {
  return create(x1);
}

void DhQDialog::create(WId x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(20,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2);
  return QWidget::create(x1, x2);
}

void DhQDialog::Dhcreate(WId x1, bool x2) {
  return QWidget::create(x1, x2);
}

void DhQDialog::Dvhcreate(WId x1, bool x2) {
  return create(x1, x2);
}

void DhQDialog::create(WId x1, bool x2, bool x3) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(21,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1, x2, x3);
  return QWidget::create(x1, x2, x3);
}

void DhQDialog::Dhcreate(WId x1, bool x2, bool x3) {
  return QWidget::create(x1, x2, x3);
}

void DhQDialog::Dvhcreate(WId x1, bool x2, bool x3) {
  return create(x1, x2, x3);
}

void DhQDialog::destroy() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(22,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::destroy();
}

void DhQDialog::Dhdestroy() {
  return QWidget::destroy();
}

void DhQDialog::Dvhdestroy() {
  return destroy();
}

void DhQDialog::destroy(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(23,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::destroy(x1);
}

void DhQDialog::Dhdestroy(bool x1) {
  return QWidget::destroy(x1);
}

void DhQDialog::Dvhdestroy(bool x1) {
  return destroy(x1);
}

void DhQDialog::destroy(bool x1, bool x2) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(24,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1, x2);
  return QWidget::destroy(x1, x2);
}

void DhQDialog::Dhdestroy(bool x1, bool x2) {
  return QWidget::destroy(x1, x2);
}

void DhQDialog::Dvhdestroy(bool x1, bool x2) {
  return destroy(x1, x2);
}

int DhQDialog::devType() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(25,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::devType();
}

int DhQDialog::DhdevType() const {
  return QWidget::devType();
}

int DhQDialog::DvhdevType() const {
  return devType();
}

void DhQDialog::dragEnterEvent(QDragEnterEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(26,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragEnterEvent(x1);
}

void DhQDialog::DhdragEnterEvent(QDragEnterEvent* x1) {
  return QWidget::dragEnterEvent(x1);
}

void DhQDialog::DvhdragEnterEvent(QDragEnterEvent* x1) {
  return dragEnterEvent(x1);
}

void DhQDialog::dragLeaveEvent(QDragLeaveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(27,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragLeaveEvent(x1);
}

void DhQDialog::DhdragLeaveEvent(QDragLeaveEvent* x1) {
  return QWidget::dragLeaveEvent(x1);
}

void DhQDialog::DvhdragLeaveEvent(QDragLeaveEvent* x1) {
  return dragLeaveEvent(x1);
}

void DhQDialog::dragMoveEvent(QDragMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(28,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dragMoveEvent(x1);
}

void DhQDialog::DhdragMoveEvent(QDragMoveEvent* x1) {
  return QWidget::dragMoveEvent(x1);
}

void DhQDialog::DvhdragMoveEvent(QDragMoveEvent* x1) {
  return dragMoveEvent(x1);
}

void DhQDialog::dropEvent(QDropEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(29,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::dropEvent(x1);
}

void DhQDialog::DhdropEvent(QDropEvent* x1) {
  return QWidget::dropEvent(x1);
}

void DhQDialog::DvhdropEvent(QDropEvent* x1) {
  return dropEvent(x1);
}

void DhQDialog::enabledChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(30,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::enabledChange(x1);
}

void DhQDialog::DhenabledChange(bool x1) {
  return QWidget::enabledChange(x1);
}

void DhQDialog::DvhenabledChange(bool x1) {
  return enabledChange(x1);
}

void DhQDialog::enterEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(31,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::enterEvent(x1);
}

void DhQDialog::DhenterEvent(QEvent* x1) {
  return QWidget::enterEvent(x1);
}

void DhQDialog::DvhenterEvent(QEvent* x1) {
  return enterEvent(x1);
}

void DhQDialog::focusInEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(32,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusInEvent(x1);
}

void DhQDialog::DhfocusInEvent(QFocusEvent* x1) {
  return QWidget::focusInEvent(x1);
}

void DhQDialog::DvhfocusInEvent(QFocusEvent* x1) {
  return focusInEvent(x1);
}

bool DhQDialog::focusNextChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(33,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusNextChild();
}

bool DhQDialog::DhfocusNextChild() {
  return QWidget::focusNextChild();
}

bool DhQDialog::DvhfocusNextChild() {
  return focusNextChild();
}

bool DhQDialog::focusNextPrevChild(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(34,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::focusNextPrevChild(x1);
}

bool DhQDialog::DhfocusNextPrevChild(bool x1) {
  return QWidget::focusNextPrevChild(x1);
}

bool DhQDialog::DvhfocusNextPrevChild(bool x1) {
  return focusNextPrevChild(x1);
}

void DhQDialog::focusOutEvent(QFocusEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(35,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::focusOutEvent(x1);
}

void DhQDialog::DhfocusOutEvent(QFocusEvent* x1) {
  return QWidget::focusOutEvent(x1);
}

void DhQDialog::DvhfocusOutEvent(QFocusEvent* x1) {
  return focusOutEvent(x1);
}

bool DhQDialog::focusPreviousChild() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(36,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(bool(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::focusPreviousChild();
}

bool DhQDialog::DhfocusPreviousChild() {
  return QWidget::focusPreviousChild();
}

bool DhQDialog::DvhfocusPreviousChild() {
  return focusPreviousChild();
}

void DhQDialog::fontChange(const QFont& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(37,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::fontChange(x1);
}

void DhQDialog::DhfontChange(const QFont& x1) {
  return QWidget::fontChange(x1);
}

void DhQDialog::DvhfontChange(const QFont& x1) {
  return fontChange(x1);
}

int DhQDialog::heightForWidth(int x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(38,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,int))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::heightForWidth(x1);
}

int DhQDialog::DhheightForWidth(int x1) const {
  return QWidget::heightForWidth(x1);
}

int DhQDialog::DvhheightForWidth(int x1) const {
  return heightForWidth(x1);
}

void DhQDialog::hideEvent(QHideEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(39,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::hideEvent(x1);
}

void DhQDialog::DhhideEvent(QHideEvent* x1) {
  return QWidget::hideEvent(x1);
}

void DhQDialog::DvhhideEvent(QHideEvent* x1) {
  return hideEvent(x1);
}

void DhQDialog::inputMethodEvent(QInputMethodEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(40,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::inputMethodEvent(x1);
}

void DhQDialog::DhinputMethodEvent(QInputMethodEvent* x1) {
  return QWidget::inputMethodEvent(x1);
}

void DhQDialog::DvhinputMethodEvent(QInputMethodEvent* x1) {
  return inputMethodEvent(x1);
}

QVariant DhQDialog::inputMethodQuery(Qt::InputMethodQuery x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(41,(void*&)ro_ptr,(void*&)rf_ptr)) return *(QVariant*)(*(void*(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::inputMethodQuery(x1);
}

QVariant DhQDialog::DhinputMethodQuery(long x1) const {
  return QWidget::inputMethodQuery((Qt::InputMethodQuery)x1);
}

QVariant DhQDialog::DvhinputMethodQuery(long x1) const {
  return inputMethodQuery((Qt::InputMethodQuery)x1);
}

void DhQDialog::keyReleaseEvent(QKeyEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(42,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::keyReleaseEvent(x1);
}

void DhQDialog::DhkeyReleaseEvent(QKeyEvent* x1) {
  return QWidget::keyReleaseEvent(x1);
}

void DhQDialog::DvhkeyReleaseEvent(QKeyEvent* x1) {
  return keyReleaseEvent(x1);
}

void DhQDialog::languageChange() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(43,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::languageChange();
}

void DhQDialog::DhlanguageChange() {
  return QWidget::languageChange();
}

void DhQDialog::DvhlanguageChange() {
  return languageChange();
}

void DhQDialog::leaveEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(44,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::leaveEvent(x1);
}

void DhQDialog::DhleaveEvent(QEvent* x1) {
  return QWidget::leaveEvent(x1);
}

void DhQDialog::DvhleaveEvent(QEvent* x1) {
  return leaveEvent(x1);
}

int DhQDialog::metric(QPaintDevice::PaintDeviceMetric x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(45,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,long))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (long)x1);
  return QWidget::metric(x1);
}

int DhQDialog::Dhmetric(long x1) const {
  return QWidget::metric((QPaintDevice::PaintDeviceMetric)x1);
}

int DhQDialog::Dvhmetric(long x1) const {
  return metric((QPaintDevice::PaintDeviceMetric)x1);
}

void DhQDialog::mouseDoubleClickEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(46,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQDialog::DhmouseDoubleClickEvent(QMouseEvent* x1) {
  return QWidget::mouseDoubleClickEvent(x1);
}

void DhQDialog::DvhmouseDoubleClickEvent(QMouseEvent* x1) {
  return mouseDoubleClickEvent(x1);
}

void DhQDialog::mouseMoveEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(47,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseMoveEvent(x1);
}

void DhQDialog::DhmouseMoveEvent(QMouseEvent* x1) {
  return QWidget::mouseMoveEvent(x1);
}

void DhQDialog::DvhmouseMoveEvent(QMouseEvent* x1) {
  return mouseMoveEvent(x1);
}

void DhQDialog::mousePressEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(48,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mousePressEvent(x1);
}

void DhQDialog::DhmousePressEvent(QMouseEvent* x1) {
  return QWidget::mousePressEvent(x1);
}

void DhQDialog::DvhmousePressEvent(QMouseEvent* x1) {
  return mousePressEvent(x1);
}

void DhQDialog::mouseReleaseEvent(QMouseEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(49,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::mouseReleaseEvent(x1);
}

void DhQDialog::DhmouseReleaseEvent(QMouseEvent* x1) {
  return QWidget::mouseReleaseEvent(x1);
}

void DhQDialog::DvhmouseReleaseEvent(QMouseEvent* x1) {
  return mouseReleaseEvent(x1);
}

void DhQDialog::moveEvent(QMoveEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(50,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::moveEvent(x1);
}

void DhQDialog::DhmoveEvent(QMoveEvent* x1) {
  return QWidget::moveEvent(x1);
}

void DhQDialog::DvhmoveEvent(QMoveEvent* x1) {
  return moveEvent(x1);
}

QPaintEngine* DhQDialog::paintEngine() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(51,(void*&)ro_ptr,(void*&)rf_ptr)) return (QPaintEngine*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::paintEngine();
}

QPaintEngine* DhQDialog::DhpaintEngine() const {
  return QWidget::paintEngine();
}

QPaintEngine* DhQDialog::DvhpaintEngine() const {
  return paintEngine();
}

void DhQDialog::paintEvent(QPaintEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(52,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::paintEvent(x1);
}

void DhQDialog::DhpaintEvent(QPaintEvent* x1) {
  return QWidget::paintEvent(x1);
}

void DhQDialog::DvhpaintEvent(QPaintEvent* x1) {
  return paintEvent(x1);
}

void DhQDialog::paletteChange(const QPalette& x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(53,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)&x1);
  return QWidget::paletteChange(x1);
}

void DhQDialog::DhpaletteChange(const QPalette& x1) {
  return QWidget::paletteChange(x1);
}

void DhQDialog::DvhpaletteChange(const QPalette& x1) {
  return paletteChange(x1);
}

void DhQDialog::resetInputContext() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(54,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::resetInputContext();
}

void DhQDialog::DhresetInputContext() {
  return QWidget::resetInputContext();
}

void DhQDialog::DvhresetInputContext() {
  return resetInputContext();
}

void DhQDialog::tabletEvent(QTabletEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(55,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::tabletEvent(x1);
}

void DhQDialog::DhtabletEvent(QTabletEvent* x1) {
  return QWidget::tabletEvent(x1);
}

void DhQDialog::DvhtabletEvent(QTabletEvent* x1) {
  return tabletEvent(x1);
}

void DhQDialog::updateMicroFocus() {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(56,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))));
  return QWidget::updateMicroFocus();
}

void DhQDialog::DhupdateMicroFocus() {
  return QWidget::updateMicroFocus();
}

void DhQDialog::DvhupdateMicroFocus() {
  return updateMicroFocus();
}

void DhQDialog::wheelEvent(QWheelEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(57,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QWidget::wheelEvent(x1);
}

void DhQDialog::DhwheelEvent(QWheelEvent* x1) {
  return QWidget::wheelEvent(x1);
}

void DhQDialog::DvhwheelEvent(QWheelEvent* x1) {
  return wheelEvent(x1);
}

void DhQDialog::windowActivationChange(bool x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(58,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,bool))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), x1);
  return QWidget::windowActivationChange(x1);
}

void DhQDialog::DhwindowActivationChange(bool x1) {
  return QWidget::windowActivationChange(x1);
}

void DhQDialog::DvhwindowActivationChange(bool x1) {
  return windowActivationChange(x1);
}

void DhQDialog::childEvent(QChildEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(59,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::childEvent(x1);
}

void DhQDialog::DhchildEvent(QChildEvent* x1) {
  return QObject::childEvent(x1);
}

void DhQDialog::DvhchildEvent(QChildEvent* x1) {
  return childEvent(x1);
}

void DhQDialog::connectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(60,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::connectNotify(x1);
}

void DhQDialog::DhconnectNotify(const char* x1) {
  return QObject::connectNotify(x1);
}

void DhQDialog::DvhconnectNotify(const char* x1) {
  return connectNotify(x1);
}

void DhQDialog::customEvent(QEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(61,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::customEvent(x1);
}

void DhQDialog::DhcustomEvent(QEvent* x1) {
  return QObject::customEvent(x1);
}

void DhQDialog::DvhcustomEvent(QEvent* x1) {
  return customEvent(x1);
}

void DhQDialog::disconnectNotify(const char* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(62,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::disconnectNotify(x1);
}

void DhQDialog::DhdisconnectNotify(const char* x1) {
  return QObject::disconnectNotify(x1);
}

void DhQDialog::DvhdisconnectNotify(const char* x1) {
  return disconnectNotify(x1);
}

int DhQDialog::receivers(const char* x1) const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(63,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(int(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)(new QString(x1)));
  return QObject::receivers(x1);
}

int DhQDialog::Dhreceivers(const char* x1) const {
  return QObject::receivers(x1);
}

int DhQDialog::Dvhreceivers(const char* x1) const {
  return receivers(x1);
}

QObject* DhQDialog::sender() const {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(64,(void*&)ro_ptr,(void*&)rf_ptr)) {
    QObject * tr = *((QPointer<QObject>*)(*(void*(*)(void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr)))));
    return (QObject*)tr;
  }
  return QObject::sender();
}

QObject* DhQDialog::Dhsender() const {
  return QObject::sender();
}

QObject* DhQDialog::Dvhsender() const {
  return sender();
}

void DhQDialog::timerEvent(QTimerEvent* x1) {
  void* ro_ptr;
  void* rf_ptr;
  if(handlerSet(65,(void*&)ro_ptr,(void*&)rf_ptr)) return (*(void(*)(void*,void*))rf_ptr)((void*)(new QPointer<QObject>(*((QPointer<QObject>*)ro_ptr))), (void*)x1);
  return QObject::timerEvent(x1);
}

void DhQDialog::DhtimerEvent(QTimerEvent* x1) {
  return QObject::timerEvent(x1);
}

void DhQDialog::DvhtimerEvent(QTimerEvent* x1) {
  return timerEvent(x1);
}

QHash <QByteArray, int> DhQDialog::initXhHash() {
  QHash <QByteArray, int> txh;
  txh[QMetaObject::normalizedSignature("accept()")] = 0;
  txh[QMetaObject::normalizedSignature("adjustPosition(QWidget*)")] = 1;
  txh[QMetaObject::normalizedSignature("closeEvent(QCloseEvent*)")] = 2;
  txh[QMetaObject::normalizedSignature("contextMenuEvent(QContextMenuEvent*)")] = 3;
  txh[QMetaObject::normalizedSignature("done(int)")] = 4;
  txh[QMetaObject::normalizedSignature("(bool)event(QEvent*)")] = 5;
  txh[QMetaObject::normalizedSignature("(bool)eventFilter(QObject*,QEvent*)")] = 6;
  txh[QMetaObject::normalizedSignature("keyPressEvent(QKeyEvent*)")] = 7;
  txh[QMetaObject::normalizedSignature("(QSize)minimumSizeHint()")] = 8;
  txh[QMetaObject::normalizedSignature("reject()")] = 10;
  txh[QMetaObject::normalizedSignature("resizeEvent(QResizeEvent*)")] = 11;
  txh[QMetaObject::normalizedSignature("setVisible(bool)")] = 12;
  txh[QMetaObject::normalizedSignature("showEvent(QShowEvent*)")] = 13;
  txh[QMetaObject::normalizedSignature("(QSize)sizeHint()")] = 14;
  txh[QMetaObject::normalizedSignature(")")] = 15;
  txh[QMetaObject::normalizedSignature("actionEvent(QActionEvent*)")] = 16;
  txh[QMetaObject::normalizedSignature("changeEvent(QEvent*)")] = 17;
  txh[QMetaObject::normalizedSignature("create()")] = 18;
  txh[QMetaObject::normalizedSignature("create(WId)")] = 19;
  txh[QMetaObject::normalizedSignature("create(WId,bool)")] = 20;
  txh[QMetaObject::normalizedSignature("create(WId,bool,bool)")] = 21;
  txh[QMetaObject::normalizedSignature("destroy()")] = 22;
  txh[QMetaObject::normalizedSignature("destroy(bool)")] = 23;
  txh[QMetaObject::normalizedSignature("destroy(bool,bool)")] = 24;
  txh[QMetaObject::normalizedSignature("(int)devType()")] = 25;
  txh[QMetaObject::normalizedSignature("dragEnterEvent(QDragEnterEvent*)")] = 26;
  txh[QMetaObject::normalizedSignature("dragLeaveEvent(QDragLeaveEvent*)")] = 27;
  txh[QMetaObject::normalizedSignature("dragMoveEvent(QDragMoveEvent*)")] = 28;
  txh[QMetaObject::normalizedSignature("dropEvent(QDropEvent*)")] = 29;
  txh[QMetaObject::normalizedSignature("enabledChange(bool)")] = 30;
  txh[QMetaObject::normalizedSignature("enterEvent(QEvent*)")] = 31;
  txh[QMetaObject::normalizedSignature("focusInEvent(QFocusEvent*)")] = 32;
  txh[QMetaObject::normalizedSignature("(bool)focusNextChild()")] = 33;
  txh[QMetaObject::normalizedSignature("(bool)focusNextPrevChild(bool)")] = 34;
  txh[QMetaObject::normalizedSignature("focusOutEvent(QFocusEvent*)")] = 35;
  txh[QMetaObject::normalizedSignature("(bool)focusPreviousChild()")] = 36;
  txh[QMetaObject::normalizedSignature("fontChange(const QFont&)")] = 37;
  txh[QMetaObject::normalizedSignature("(int)heightForWidth(int)")] = 38;
  txh[QMetaObject::normalizedSignature("hideEvent(QHideEvent*)")] = 39;
  txh[QMetaObject::normalizedSignature("inputMethodEvent(QInputMethodEvent*)")] = 40;
  txh[QMetaObject::normalizedSignature("(QVariant)inputMethodQuery(Qt::InputMethodQuery)")] = 41;
  txh[QMetaObject::normalizedSignature("keyReleaseEvent(QKeyEvent*)")] = 42;
  txh[QMetaObject::normalizedSignature("languageChange()")] = 43;
  txh[QMetaObject::normalizedSignature("leaveEvent(QEvent*)")] = 44;
  txh[QMetaObject::normalizedSignature("(int)metric(QPaintDevice::PaintDeviceMetric)")] = 45;
  txh[QMetaObject::normalizedSignature("mouseDoubleClickEvent(QMouseEvent*)")] = 46;
  txh[QMetaObject::normalizedSignature("mouseMoveEvent(QMouseEvent*)")] = 47;
  txh[QMetaObject::normalizedSignature("mousePressEvent(QMouseEvent*)")] = 48;
  txh[QMetaObject::normalizedSignature("mouseReleaseEvent(QMouseEvent*)")] = 49;
  txh[QMetaObject::normalizedSignature("moveEvent(QMoveEvent*)")] = 50;
  txh[QMetaObject::normalizedSignature("(QPaintEngine*)paintEngine()")] = 51;
  txh[QMetaObject::normalizedSignature("paintEvent(QPaintEvent*)")] = 52;
  txh[QMetaObject::normalizedSignature("paletteChange(const QPalette&)")] = 53;
  txh[QMetaObject::normalizedSignature("resetInputContext()")] = 54;
  txh[QMetaObject::normalizedSignature("tabletEvent(QTabletEvent*)")] = 55;
  txh[QMetaObject::normalizedSignature("updateMicroFocus()")] = 56;
  txh[QMetaObject::normalizedSignature("wheelEvent(QWheelEvent*)")] = 57;
  txh[QMetaObject::normalizedSignature("windowActivationChange(bool)")] = 58;
  txh[QMetaObject::normalizedSignature("childEvent(QChildEvent*)")] = 59;
  txh[QMetaObject::normalizedSignature("connectNotify(const char*)")] = 60;
  txh[QMetaObject::normalizedSignature("customEvent(QEvent*)")] = 61;
  txh[QMetaObject::normalizedSignature("disconnectNotify(const char*)")] = 62;
  txh[QMetaObject::normalizedSignature("(int)receivers(const char*)")] = 63;
  txh[QMetaObject::normalizedSignature("(QObject*)sender()")] = 64;
  txh[QMetaObject::normalizedSignature("timerEvent(QTimerEvent*)")] = 65;
  return txh;
}

QHash <QByteArray, int> DhQDialog::xhHash = DhQDialog::initXhHash();

bool DhQDialog::setDynamicQHandler(void * ro_ptr, char * eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return isetDynamicQHandler(ro_ptr, thir, rf_ptr, st_ptr, df_ptr);
  }
  return false;
}

bool DhQDialog::setDynamicQHandlerud(int udtyp, void * ro_ptr, int eventId, void * rf_ptr, void * st_ptr, void * df_ptr) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return isetDynamicQHandlerud(ro_ptr, eventId, rf_ptr, st_ptr, df_ptr, udtyp);
}

bool DhQDialog::unSetDynamicQHandler(char * eventId) {
  QByteArray theHandler = QMetaObject::normalizedSignature(eventId);
  if (xhHash.contains(theHandler)) {
    int thir = xhHash.value(theHandler);
    return iunSetDynamicQHandler(thir);
  }
  return false;
}

bool DhQDialog::unSetDynamicQHandlerud(int udtyp, int eventId) {
  if ((udtyp < 0) || (udtyp > 2)) {
    return false;
  }
  return iunSetDynamicQHandlerud(eventId, udtyp);
}

