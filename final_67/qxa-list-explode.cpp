#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "list.h"
#include "vector.h"

template <typename T>
CP::vector<CP::list<T>> CP::list<T>::explode(){
    CP::vector<CP::list<T>> v(mSize);
    node * n = mHeader->next;
    for(int i=0 ; i<mSize; ++i){
        node * tmp = n->next;
        n->prev = v[i].mHeader;
        v[i].mHeader->next = n;
        v[i].mHeader->prev = n;
        n->next = v[i].mHeader;
        v[i].mSize = 1;
        n = tmp;
    }
    mSize = 0;
    mHeader->next = mHeader;
    mHeader->prev = mHeader;
    return v;
    
}

#endif
