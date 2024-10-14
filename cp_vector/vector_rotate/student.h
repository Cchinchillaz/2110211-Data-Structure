#ifndef __STUDENT_H_
#define __STUDENT_H_

using namespace std;
template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  int n = last-first; 
  if(n==0 || k == 0) return;
  int s = first-begin();
  k %= n;
  T *data = new T[k]();
  for(int i = 0; i < k; ++i){
    data[i] = mData[s+i]; 
  }
  for(int i = s; i < s+n-k; ++i){
    mData[i] = mData[i+k]; 
  }
  for(int i = 0; i < k; ++i){
    mData[s+n-k+i] = data[i];
  }
}

#endif
