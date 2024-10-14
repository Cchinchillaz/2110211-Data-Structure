#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,m = 1;
    cin >> n;
    while(m < n){
        m*=2;
    }
    cout << m-n;
}