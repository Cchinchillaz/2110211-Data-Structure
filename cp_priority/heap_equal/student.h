#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <bits/stdc++.h>
template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {
  //write your code here
  if(mSize != other.mSize) return false;
  std::vector<T> v1(mSize),v2(other.mSize);
  for(int i=0; i<mSize; ++i){
    v1[i] = mData[i];
    v2[i] = other.mData[i];
  }
  std::sort(v1.begin(),v1.end(),mLess);
  std::sort(v2.begin(), v2.end(), other.mLess);
  for(int i=0; i<mSize; ++i){
    if(v1[i] != v2[i]) return false;
  }
  return true; // you can change this line
}

#endif
