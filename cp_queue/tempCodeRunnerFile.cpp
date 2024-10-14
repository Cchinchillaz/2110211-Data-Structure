#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,mFront,mSize,mCap,last,correction;
    cin >> n >> mFront >> mSize >> mCap >> last >> correction;
    bool f = true;
    if(mFront < 0 || mFront >= mCap) f = false;
    else if(mFront + mSize - last != 0 || mFront + mSize- last > mCap) f = false; 
    else if(last != (mFront+mSize)%mCap || mCap < mSize) f = false; 
    else if(last != (mFront+mSize)%mCap) f = false;

    if(f) cout << "OK";
    else {
        cout << "WRONG";
        switch(correction){
            case 1: 
                mFront = (last+mCap-mSize)%mCap;
                cout << " " << mFront;
                break;
            case 2: 
                if(last-mFront >= 0) mSize = last-mFront;
                else mSize = last-mFront+mCap;
                cout << " " << mSize;
                break;
            case 3:  
                mCap = mFront + mSize-last;
                if(mCap == 0) mCap = last+1;
                cout << " " << mCap;
                break;
            case 4: 
                last = (mFront+mSize)%mCap;
                cout << " " << last;
        }
    }
    cout << "\n";
    
}