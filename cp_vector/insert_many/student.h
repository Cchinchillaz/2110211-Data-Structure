#ifndef __STUDENT_H_
#define __STUDENT_H_
#include<algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  sort(data.begin(),data.end());
  ensureCapacity(mSize+data.size());
   T *arr = new T[mCap]();
   int c = 0, index = 0;
   for(int i=0; i<mSize; ++i){
    if(index < data.size() && i == data[index].first){
      arr[i+c] = data[index].second;
      ++index; ++c; 
    }
    arr[i+c] = mData[i];
   }
   if(data[index].first == mSize) arr[mSize+data.size()-1] = data[index].second;

   delete [] mData;
   mData = arr;
   mSize += data.size();
}

#endif
