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
  int n = k;
  if(n == 1){return mData[0];}
  else if(n==2){
    return (mLess(mData[1],mData[2])? mData[2]:mData[1]);
  }
  else{
    int max = mLess(mData[1],mData[2])? 2:1;
    int min = mLess(mData[1],mData[2])? 1:2;
    T x = mData[min];
    if(2*max+1<mSize && mLess(x,mData[2*max+1])) x = mData[2*max+1];
    if(2*max+2<mSize && mLess(x,mData[2*max+2])) x = mData[2*max+2];
    return x;
  }
}

#endif
