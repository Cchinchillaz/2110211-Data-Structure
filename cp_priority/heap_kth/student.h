#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  //write your code here
  //can include anything
  using namespace std;
  std::vector<T> v;
  int end = (mSize>7)? 7:mSize;
  for(int i=0; i<k; ++i){
    v.push_back(mData[i]);
  }
  std::sort(v.begin(), v.end(), [this](const T &a, const T &b) {
    return !mLess(a, b); 
  });
  for(int i=k; i<end; ++i){
    int j = 0;
    for(j; j<k; ++j){
      if(mLess(v[j],mData[i])){break;}
    }
    if(j<k){
      for(int h = j+1; h<k; ++h){
        v[h] = v[h-1];
      }
      v[j] = mData[i];
    }
    
  }
  return v.back();
}

#endif
