#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,x,c,d;
    cin >> n >> m;
    vector<tuple<int,int,int>> v;
    vector<pair<int,int>> v2(m);
    set<pair<int,int>> s;
    for(int i =0 ;i <2*m; ++i){
        cin >> x >> c >> d;
        v.push_back({c,d,x});
    }
    sort(v.begin(),v.end());
    int idx = 0;
    for(auto [c,d,x]:v){
       if(!d) v2[idx].first = x;
       else v2[idx++].second = x;
    }
    for(auto [start,end]:v2){
        auto it1 = s.lower_bound({start,0});
        auto it2 = s.lower_bound({end,1});
        if(it1 == it2 && end != it2->first || (it1 == s.end())){
            s.insert({start,0});
            s.insert({end,1});
        }
    }

    int ans = 0,curr = 0;
    for(auto it = s.begin(); it != s.end(); ++it){
        if(it->second == 0) ++curr;
        else --curr;
        if(curr > ans) ans = curr;
    }
    cout << ans;
}
