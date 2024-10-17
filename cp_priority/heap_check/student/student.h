#ifndef __STUDENT_H
#define __STUDENT_H

#include "priority_queue.h"

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::check() {
  // Your code here
  int idx=0;
  while(idx < mSize){
    if(2*idx+1 < mSize && mLess(mData[idx],mData[2*idx+1])) return false;
    if(2*idx+2 < mSize && mLess(mData[idx],mData[2*idx+2])) return false;
    ++idx;
  }
  // Return something
  return true;
}

#endif