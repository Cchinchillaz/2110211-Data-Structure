#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    T temp = mData[(mFront+pos)%mCap];
    for(int i=pos; i<mSize-1; ++i){
        mData[(mFront+i)%mCap] = mData[(mFront+i+1)%mCap];
    }
    mFront = (mFront+mCap-1)%mCap;
    mData[mFront] = temp;
}

#endif
