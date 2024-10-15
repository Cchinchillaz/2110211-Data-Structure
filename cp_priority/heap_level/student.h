#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include <iostream>
#include <functional>
#include "priority_queue.h"

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  std::vector<T> r;
  int end = std::min<int>(mSize,(1<<k+1)-1);
  for(int i = (1<<k)-1; i<end; ++i){  
    r.push_back(mData[i]);
  }
  sort(r.begin(),r.end(),std::not_fn(mLess));
  return r;
}

#endif
