#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::compress() {
    //write your code here
    auto data = new T[mSize];
    for(auto it = begin();it!=end();++it){
        data[i] = *it;
    }
    delete[] mData;
    mData = data;
}

#endif
