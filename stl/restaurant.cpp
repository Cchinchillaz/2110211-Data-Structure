#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,m,time=0;
    cin >> n >> m;
    int t[n];
    for(int i=0;i<n;++i){cin >> t[i];}
    while(m){
       for(int i:t){
        if(i==0 || (m&&time%i==0)){cout << time << "\n";--m;}
       }
       ++time;
    }
}
