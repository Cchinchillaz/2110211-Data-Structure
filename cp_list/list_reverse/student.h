#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
  //write your code here
  if(mSize == 0 || a == b)return a;
  iterator it = a;
  --b;
  while(it != b){
    std::swap(*it,*b); if(--b == it) break;++it;}
  return a;
}

#endif
