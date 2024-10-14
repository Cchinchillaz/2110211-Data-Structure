#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"

template <typename T>
void CP::stack<T>::reverse(size_t first, size_t last){
	// write your code here
	if(first>last) return;
	if(last>=mSize) last = mSize-1;
	if(first<0) first = 0;
	int n = (last-first+1)/2;
	for(int i=0; i<n; ++i){
		std::swap(mData[mSize-1-last+i],mData[mSize-1-first-i]);
	}
}

#endif
