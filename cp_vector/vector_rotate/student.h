#ifndef __STUDENT_H_
#define __STUDENT_H_

using namespace std;
template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  int n = last-first;
  if(n==0||k==0) return;
  int start = first-begin();
  int end = last-begin();
  int move = n-k;
  T *arr = new T[k]();
  for(int i = 0; i<k; ++i){
    arr[i] = mData[start+i];
  }
  for(int i=0; i<move; ++i){
    mData[start+i] = mData[start+i+k];
  }
  for(int i=0; i<k; ++i){
    mData[start+move+i] = arr[i];
  }

}

#endif
