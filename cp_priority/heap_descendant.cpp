#include<bits/stdc++.h>
using namespace std;

int n,cnt=0;
const int MAX_N = 2e5+5;
bool check[MAX_N] = {false};

void findChildren(int m){
    if(m>=n) return;
    check[m] = true;
    ++cnt;
    findChildren(2*m+1);
    findChildren(2*m+2);
}

int main(){
    int m;
    cin >> n >> m;
    findChildren(m);
    cout << cnt << "\n";
    for(int i=0;i<n; ++i){
        if(check[i]) cout << i << " ";
    }
}