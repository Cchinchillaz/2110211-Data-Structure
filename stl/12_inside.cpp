#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,m,x;
    int start,end;
    cin >> n >> m;
    vector<int> s,e;
    for(int i=0;i<n;++i){
        cin >> start >> end;
        s.push_back(start);
        e.push_back(end);
    }
    sort(s.begin(),s.end());
    sort(e.begin(),e.end());
    for(int i=0;i<m;++i){
        cin >> x;
        auto it = lower_bound(e.begin(),e.end(),x);
        if(it == e.end()){cout << 0 << " ";}
        else if(s[it-e.begin()] <= x) cout << 1 << " ";
        else cout << 0 << " ";
    }
}