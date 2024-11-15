#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <bits/stdc++.h>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here
  std::vector<iterator> v;
  int cnt = 0;
  if(mSize==0 || a==b) return;
  for(auto it = a; it != b; ++it){
    if(*(it) == value){
     ++cnt;
     it.ptr->prev->next = it.ptr->next;
     it.ptr->next->prev = it.ptr->prev;
     --mSize;
     v.push_back(it.ptr);
    }
  }
  if(cnt != 0){
    for(int i=0; i<v.size(); ++i){
    if(i==0){
      // output.mHeader->next = v[i];
      v[0].ptr->prev = output.mHeader;
    }
    else{
      v[i-1].ptr->next = v[i].ptr;
      v[i].ptr->prev = v[i-1].ptr;
    }
    ++output.mSize;
  }
    v.back().ptr->next = output.mHeader->next;
    output.mHeader->next->prev = v.back().ptr; 
    output.mHeader->next = v[0].ptr;
  }
}

#endif
