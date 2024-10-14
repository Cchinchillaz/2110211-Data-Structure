#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  //write your code here
  ensureCapacity(2*mSize);
  for(int i=mSize;i<2*mSize;++i){
   mData[i] = mData[2*mSize-1-i];
  }
  mSize *=2;
}

#endif
