#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include "queue.h"

template <typename T>
void CP::queue<T>::remove_many(std::vector<size_t> pos)
{
  // your code here
  bool check[mSize] = {false};
  for(auto i:pos) check[i] = true;
  int p = 0;
  T *arr = new T[mCap]();
  for(int i=0; i<mSize; ++i){
   if(!check[i]) arr[p++] = mData[(mFront+i)%mCap];
  }
  mFront = 0;
  mSize = p;
  delete [] mData;
  mData = arr;
}

#endif
