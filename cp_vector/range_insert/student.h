#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  int n = last-first;
  int pos = position - mData;
  ensureCapacity(mSize+n);
  for(int i = mSize; i >= pos; --i){
    mData[i+n] = mData[i];
  }
  for(auto it = first; it!= last; ++it){
    mData[pos++] = *it;
  }
  mSize += n;
}

#endif
