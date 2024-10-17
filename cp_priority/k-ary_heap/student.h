#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    T temp = mData[idx];
      while (idx > 0) {
        size_t p = (idx - 1) / 4;
        if ( mLess(temp,mData[p]) ) break;
        mData[idx] = mData[p];
        idx = p;
      }
      mData[idx] = temp;
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    T temp = mData[idx];
    size_t c, maxIndex = idx;
     while ((c = 4 * idx + 1) < mSize) {
        T max = mData[c]; maxIndex = c;
        for(size_t j=c; j<c+4 && j<mSize ; ++j){
            if(mLess(max,mData[j])){max = mData[j]; maxIndex = j;}
        }
        c = maxIndex;
        if ( mLess(mData[c],temp) ) break;
        mData[idx] = mData[c];
        idx = c;
      }
      mData[idx] = temp;
}

#endif

