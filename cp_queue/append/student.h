#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        ensureCapacity(mSize+s.size());
        for(int i= mSize-1+s.size(); i>= (int) s.size() ; --i){
            mData[i] = mData[i-s.size()];
        }
        for(int i=0; i< (int) s.size(); ++i){
            mData[i] = s.mData[i];
        }
        mSize += s.size();
    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
       stack<T> a,b;
       while(!empty()){
        a.push(top()); pop();
       }
       while(!q.empty()){a.push(q.front()); q.pop();}
       while(!a.empty()){b.push(a.top()); a.pop();}

       *this = b;
    }

     template<typename T>
     void queue<T>::appendStack(stack<T> s) {
        ensureCapacity(mSize+s.size());
        while(!s.empty()){
            push(s.top());s.pop();
        }
    }

     template<typename T>
     void queue<T>::appendQueue(queue<T> q) {
        ensureCapacity(mSize+q.size());
        for(int i = 0; i<q.size(); ++i){
            mData[(mFront + mSize +i) % mCap] = q.mData[(q.mFront+i)%q.mCap];
        }
        mSize += q.size();
       
    }
}

