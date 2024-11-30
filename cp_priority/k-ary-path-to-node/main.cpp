#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    stack<ll> s;
    ll n,k,p;
    cin >> n >> k >> p;
    while(p != 0){
        s.push((p-1)%k);
        p = (p-1)/k;
    }
    cout << s.size() << "\n";
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
}