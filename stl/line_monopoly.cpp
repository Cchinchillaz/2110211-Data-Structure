#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,op,a,b;
    cin >> n;
    set<pair<int,int>> s;
    while(n--){
        cin >> op;
        if(op==1){
            cin >> a >> b;
            auto it1 = s.upper_bound({a-1,0});
            auto it2 = s.upper_bound({b+1,0});
            if(it1 != s.end()){
                if(it1 != it2){
                    if(it1->second == 1){
                        --it1; a = it1->first;
                    }
                    if(it2 != s.end()){
                         if(it2->second == 1) b = it2->first;
                    }
                    s.erase(it1,it2);
                } 
                else if(it1->second == 1) continue; 
            }
            s.insert({a,0});
            s.insert({b,1});
        }
        if(op==2){
            cout << s.size()/2 << "\n";
            // for(auto [k,v]:s){
            //     cout << k << " " << v << ", ";
            // }
            // cout << "\n";
        }
    }
}