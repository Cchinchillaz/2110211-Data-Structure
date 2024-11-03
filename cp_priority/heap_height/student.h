#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  //write your code here
  if(mSize == 0) return -1;
  int n = mSize, ans = 0;
  while(n>=2){
    n/=2; ++ans;
  }
  return ans;
}

#endif

