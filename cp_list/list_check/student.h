#ifndef __STUDENT_H__
#define __STUDENT_H__


template <typename T>
bool CP::list<T>::check() {
  //your code here
  node *n = mHeader->next;
  node *cur = mHeader;
  for(int i=0; i<mSize; ++i){
    if(n == NULL || cur == NULL) return false;
    if(n->prev != cur) return false;
    n = n->next;
    cur = cur->next;
  }
  if(n != mHeader) return false;
  if(cur != mHeader->prev) return false;
  return true;
}


#endif
