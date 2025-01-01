#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,start,end;
    set<pair<int,int>> s;
    cin >> n;
    for(int i=1;i<=n;++i){
        cin >> start >> end;
        auto it = s.upper_bound({start,0});
        if(it==s.end() || it->second > end){
            cout << i << " ";
            s.insert({end,start});
        }
    }
}