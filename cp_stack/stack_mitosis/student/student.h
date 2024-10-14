#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b){
    if (mSize + (b-a+1) > mCap)
      expand(std::max(mCap * 2, mSize+(b-a+1)));
    for(int i = mSize+b-a; i>mSize+b-2*a; --i){
        mData[i] = mData[i-(b-a+1)];
    }
    int idx = mSize-1-a;
    auto tmp = mData[idx];
    for(int i = mSize+b-2*a; i> mSize-1-b; --i){
        mData[i] = tmp;
        if((mSize+b-2*a-i)%2) tmp = mData[--idx];
    } 
    mSize += b-a+1;
}

#endif