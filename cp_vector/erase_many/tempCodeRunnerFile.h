#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  auto data = new T(mCap);
  int cpos = 0,ci = 0;
  for(int i=0;i<mSize;++i){
    if(cpos<pos.size() && i==pos[cpos]) ++cpos;
    else data[ci++] = mData[i];
  }
  mSize = ci;
  mData = data;
}

#endif
