#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,m,b;
    int x,a;
    cin >> n >> m;
    unordered_map<int,int> mp;
    set<pair<int,int>> s;
    while(n--){
        cin >> x;
        mp[x] = 0;
    }
    while(m--){
        cin >> x;
        if(x==1){
            cin >> a >> b;
            if(mp.find(a)!=mp.end()){
                s.erase({mp[a],a});
                mp[a]+=b;
                s.insert({mp[a],a});
            }
        }
        if(x==2){
            cin >> b;
            auto it = s.lower_bound({b,0});
            if(it == s.begin()){
                cout << "NONE\n";
            } 
            else{
                it--;
                cout << it->second << "\n";            
            }
        }
     }
 }
