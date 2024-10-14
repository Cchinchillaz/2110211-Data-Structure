#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,m,k;
    cin >> n >> m >> k;
    vector<pair<int,int>> speed(n);
    for(int i=0; i<n; ++i){
        cin >> speed[i].first >> speed[i].second;
    }
    sort(speed.begin(),speed.end());
    vector<pair<int,int>> decrease;
    vector<pair<int,int>> q2;

    decrease.push_back({0,k});
    q2.push_back({k,0});
    
    for(auto [second,velo]:speed){
        if(k-velo < 0){
            decrease.push_back(make_pair(second,0));
            q2.push_back(make_pair(0,second)) ;
            break;}
        else {
            k-=velo;
            decrease.push_back(make_pair(second,k)); 
            q2.push_back(make_pair(k,second));}
    }
    sort(q2.begin(),q2.end());
    int a,q;
    for(int i=0; i<m; ++i){
        cin >> a >> q;
        if(a==1){
            auto it = upper_bound(decrease.begin(),decrease.end(),make_pair(q,0));
            if(q != it->first)--it;
            cout << it->second << "\n";
        }
        else{
            auto it = upper_bound(q2.begin(),q2.end(),make_pair(q,0));
            if(it == q2.end()) cout << 0 << "\n";
            else if(it == q2.begin()) cout << it->second << "\n";
            else{
                --it;
                cout << it->second << "\n";
            }
        }
    }
}