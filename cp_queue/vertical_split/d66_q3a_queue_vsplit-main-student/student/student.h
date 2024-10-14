#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>
#include "queue.h"

template <typename T>
void CP::queue<T>::v_split(std::vector<std::queue<T>> &output, size_t k) const
{
  // your code here
  output.resize(k);
  int a = mSize/k, b = mSize%k;
  int p = 0;
  for(int i=0; i<k; ++i){
    for(int j=0; j<a; ++j){
      output[i].push(mData[(mFront+p)%mCap]);
      ++p;
    }
    if(i < b){output[i].push(mData[(mFront+p)%mCap]); ++p;}
  }
}

#endif
