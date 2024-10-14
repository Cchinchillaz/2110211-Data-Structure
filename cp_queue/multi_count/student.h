#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::vector<std::pair<T,size_t>> v;
    std::map<T,int> M;
    for(int i=0; i<mSize; ++i){
        M[mData[(mFront+i)%mCap]] += 1;  
    }

    for(auto x:k){
        v.push_back(std::make_pair(x,M[x]));
    }
    return v;
}

#endif
