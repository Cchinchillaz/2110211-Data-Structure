#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <bits/stdc++.h>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
  int cnt = 0;
  for(auto it = a; it != b; ++it){
    if(*it == value){
      it.ptr->prev->next = it.ptr->next;
      it.ptr->next->prev = it.ptr->prev;
      delete it.ptr;
      --mSize;
      ++cnt;
    } 
  }
  while(cnt--){
    node *n = new node(value,output.mHeader,output.mHeader->next);
    output.mHeader->next->prev = n;
    output.mHeader->next = n;
    ++output.mSize;
  }
}

#endif
