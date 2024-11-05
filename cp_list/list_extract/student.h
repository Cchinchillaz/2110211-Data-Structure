#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
  int cnt = 0;
  if(mSize==0 || a==b) return;
  for(auto it = a; it != b; ++it){
    if(*(it) == value){
     ++cnt;
     it.ptr->prev->next = it.ptr->next;
     it.ptr->next->prev = it.ptr->prev;
     --mSize;
     delete it.ptr;
    }
  }
  for(int i=0; i<cnt; ++i){
    auto it = output.begin();
    node *temp = new node(value,it.ptr->prev,it.ptr);
    it.ptr->prev->next = temp;
    it.ptr->prev = temp;
    ++output.mSize;
  }
}

#endif
