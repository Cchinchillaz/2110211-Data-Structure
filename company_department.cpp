#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int m,n,op;
    string a,b;
    cin >> n >> m;
    map<string,set<string>> mp;
    map<string,string> d;
    for(int i=0; i<n; ++i){
        cin >> a >> b;
        mp[b].insert(a);
        d[a] = b;
    }
    for(int i=0; i<m; ++i){
        cin >> op >> a >> b;
        if(op==1){
            auto depth = d[a];
            d[a] = b;
            mp[depth].erase(a);
            mp[b].insert(a);
        }
        if(op==2){
            for(auto x:mp[a]){
                mp[b].insert(x);
                d[x] = b;
            }
            mp.erase(a);
        }
    }

    for(auto &[k,v]:mp){
        cout<< k<< ": ";
        for(auto e:v){
            cout << e << " ";
        }
        cout << "\n";
    }
}