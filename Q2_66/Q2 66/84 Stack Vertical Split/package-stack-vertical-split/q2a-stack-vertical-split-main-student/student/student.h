#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "stack.h"

template <typename T>
void CP::stack<T>::v_split(std::vector<std::stack<T>> &output, size_t k) const {
  // Write code here
  output.resize(k);
  int p = 0, int idx = mSize;
  int a = mSize/k, b = msize%k;
  
  for(int i=k-1; i>=0; --i){
    for(int j=0; j<a; ++j){
      output[i].push(mData[p++]);
    }
    if(i<b) output[i].push(mData[p++]);
  }

  return output;
  
}

#endif
