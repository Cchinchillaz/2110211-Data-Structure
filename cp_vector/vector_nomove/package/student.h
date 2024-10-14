#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
T& CP::vector_no_move<T>::operator[](int idx) {
  //your code here
  using namespace std;
  auto it = upper_bound(aux.begin(),aux.end(),idx);
  int pos = it-aux.begin();
  if(it != aux.begin()){
    --it; idx -= (*it);
  }
  return mData[pos][idx];
}

template <typename T>
void CP::vector_no_move<T>::expand_hook() {
  //your code here
  //you MAY need this function
  int i = 0;
  if( aux.size() && mData.size()) i = aux.back();
  aux.push_back(i + mData.back().size());
}

#endif
