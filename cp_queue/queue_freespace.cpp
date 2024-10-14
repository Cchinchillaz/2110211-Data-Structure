#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    long long cap = 1, size = 0;
    cin >> n;
    while(n--){
        cin >> m >> k;
        if(m==1) size -= k;
        else{
            size += k;
            while(size>cap) cap*=2;
        }
    }
    cout << cap-size;
}