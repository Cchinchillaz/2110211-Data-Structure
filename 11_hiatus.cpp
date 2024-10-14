#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base:: sync_with_stdio(false);cin.tie(0);
    int n,m,x,y;
    cin >> n >> m;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin >> x >> y;
        v[i] =x*100+y; 
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m;++i){
        cin >> x >> y;
        x = x*100+y;
        auto it = lower_bound(v.begin(),v.end(),x);
        if(x<v[0]) cout << "-1 -1 ";
        else if(*it == x) cout << "0 0 ";
        else{--it; cout << *it/100 << " " << *it%100 << " ";}
    }
    
}