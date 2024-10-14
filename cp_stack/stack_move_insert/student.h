#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  //your code here
  if(m==0) return;
  if(m>s2.mSize) m = s2.mSize;
  if(mCap < mSize+m) expand(std::max(mSize+m,2*mCap));
  for(int i = mSize+m-1; i >= mSize-k+m; --i){
    mData[i] = mData[i-m];
  }
  int j = mSize-k;
  for(int i = mSize-k-1+m; i>= j; --i){
   if(!s2.empty()){mData[i] = s2.top(); s2.pop();}
  }
  mSize += m;
}
#endif
