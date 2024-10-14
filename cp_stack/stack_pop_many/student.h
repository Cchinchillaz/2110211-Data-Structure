#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  if(K > mSize) mSize = 0;
  else mSize -= K;
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  std::stack<T> s,ans;
  if(mSize == 0) return ans;
  if(K > mSize) K = mSize;
  for(int i=0; i<K; ++i){
    s.push(top()); pop();
  }
  while(!s.empty()){
    ans.push(s.top()); s.pop();
  }
  //don't forget to return an std::stack
  return ans;
}

#endif
