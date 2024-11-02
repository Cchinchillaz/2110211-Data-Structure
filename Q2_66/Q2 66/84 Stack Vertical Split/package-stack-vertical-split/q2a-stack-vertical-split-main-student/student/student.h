#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "stack.h"

template <typename T>
void CP::stack<T>::v_split(std::vector<std::stack<T>> &output, size_t k) const {
  // Write code here
  output.resize(k);
  int a = mSize/k, b = mSize%k;
  int idx = 0;
  for(int i=k-1; i>=0; --i){
    if(idx >= mSize) break;
    for(int j=0; j<a; ++j){
      output[i].push(mData[idx++]);
    }
    if(i<b) output[i].push(mData[idx++]);
  }
  
}

#endif
