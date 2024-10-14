#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>

template <typename T>
std::vector<std::vector<T>>  CP::stack<T>::split_stack(int k) const {
  using namespace std;
  vector<vector<T>> v(k);
  //your code here
  for(int i=0;i<mSize;++i){
    v[(mSize-i-1)%k].push_back(mData[i]);
  }
  //should return something
  return v;
}

#endif

