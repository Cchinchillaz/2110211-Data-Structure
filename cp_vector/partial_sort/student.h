#ifndef __STUDENT_H_
#define __STUDENT_H_

//can include anything
#include<bits/stdc++.h>

template <typename T>
template <typename CompareT>
void CP::vector<T>::partial_sort(std::vector<iterator> &pos,CompareT  comp) {
  // Write code here
  // you can compare two data A and B of type T by calling comp(A,B)
  // which return true when A is less than B
  std::sort(pos.begin(),pos.end());
  std::vector<T> temp;

  for(auto &it:pos) temp.push_back(*it);

  std::sort(temp.begin(), temp.end(), comp);
  int p = 0;
  for(auto &it:pos){
    *(it) = temp[p++];
  }
}

#endif
