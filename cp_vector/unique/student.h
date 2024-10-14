#ifndef __STUDENT_H_
#define __STUDENT_H_

//you can include any other file here
//you are allow to use any data structure
#include<unordered_set>
using namespace std;

template <typename T>
void CP::vector<T>::uniq() {
  //do someting here
  T *data = new T[mCap];
  unordered_set<T> m;
  int p = 0;
  for(int i=0;i<mSize;++i){
    if(m.find(mData[i]) == m.end()){m.insert(mData[i]); data[p++] = mData[i];}
  }
  mSize = m.size();
  delete [] mData;
  mData = data;
}

#endif

