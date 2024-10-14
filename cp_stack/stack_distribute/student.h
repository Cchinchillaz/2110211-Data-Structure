#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  //write your code here
  using namespace std;
  vector<vector<T>> v(k);
  int a = mSize/k, b = mSize%k;
  int idx = mSize-1;
  for(int i=0; i<k; ++i){
    for(int j=0; j<a; ++j){
      v[i].push_back(mData[idx--]);
    }
    if(i<b) v[i].push_back(mData[idx--]);
  }
  return v;
}
#endif
