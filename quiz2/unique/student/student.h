#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include<bits/stdc++.h>
#include "vector.h"

template <typename T>
void CP::vector<T>::uniq(std::vector<CP::vector<T>::iterator> itrs) {
  // Write code here
  bool check[mSize] = {false};
  std::map<T,int> mp;
  for(auto pos:itrs){
    auto idx = pos - begin();
    auto it = mp.find(*pos);
    if(it == mp.end()) mp[*pos] = idx;
    else{
      if(idx < (mp[*pos])){
        check[mp[*pos]] = true;
        mp[*pos] = idx;
      }
      else check[idx] = true;
    }
  }
  T *arr = new T[mSize]();
  int p = 0;
  for(int i=0; i<mSize; ++i){
    if(!check[i]) arr[p++] = mData[i];
  }

  delete[] mData;
  mData = arr;
  mSize = p;
}

#endif
