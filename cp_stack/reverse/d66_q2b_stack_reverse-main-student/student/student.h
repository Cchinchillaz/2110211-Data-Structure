#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"

template <typename T>
void CP::stack<T>::reverse(size_t first, size_t last){
	// write your code here
	if(first>last) return;
	if(first<0) first = 0;
	if(last>mSize-1) last = mSize-1;
	int p = (last-first+1)/2;
	for(int i = 0; i<p; ++i){
		std::swap(mData[mSize-1-first-i],mData[mSize-1-last+i]);
	}
}

#endif
