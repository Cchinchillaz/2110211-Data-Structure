#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  //write your code here
  int k = mSize, ans = 0;
  if(k==0) return -1;
  while(k >= 2){
    k /= 2;
    ++ans;
  }
  return ans;
}

#endif

