#ifndef __STUDENT_H_
#define __STUDENT_H_

using namespace std;
template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  if(m<=0) return false;
  if(a<begin() || a>=end() || b<begin() || b>=end()) return false;
  if(a>b) swap(a,b);
  if(a+m > b) return false;
  if(b+m > end()) return false;
  for(int i=0;i<m;++i){
    swap(*(a+i),*(b+i));
  }
  return true;
}

#endif
