#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    ll mFront,mSize,mCap,last,correction;
    cin >> n;
    while(n--){ 
    cin >> mFront >> mSize >> mCap >> last >> correction;
    bool f = false;
    if(mFront < mCap && mSize <= mCap && last < mCap && (mFront + mSize) % mCap == last ) f = true;

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
                else mSize = (last-mFront+mCap)%mCap;
                cout << " " << mSize;
                break;
            case 3:  
                if(mFront < last) mCap = last+1;
                else  mCap = mFront + mSize-last;
                cout << " " << mCap;
                break;
            case 4: 
                last = (mFront+mSize)%mCap;
                cout << " " << last;
        }
    }
    cout << "\n";
    }
    
}