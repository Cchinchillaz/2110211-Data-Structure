#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
  T temp = mData[idx];
  while(idx > 0){
    int p = (idx-1)/4;
    if(mLess(temp,mData[p])) break;
    mData[idx] = mData[p];
    idx = p;
  }
  mData[idx] = temp;
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
   T temp = mData[idx]; 
   size_t c;
   while((c = 4*idx + 1) < mSize){
    T max = mData[c]; int j = 0;
    for(int i=0; i<4 && c+i < mSize; ++i){
      if(mLess(max,mData[c+i])){max = mData[c+i]; j = i;}
    }
    c += j;
    if(mLess(max,temp)) break;
    mData[idx] = max;
    idx = c;
   }
   mData[idx] = temp;
}

#endif

