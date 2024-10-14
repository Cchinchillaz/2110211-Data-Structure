#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,start,end;
    cin >> n;
    set<pair<int,int>> s;
    for(int i=1;i<=n;++i){
        cin >> start >> end;
        auto it = s.lower_bound({start,0});
        if(it->second > end || it == s.end()){
            s.insert({end,start});
            cout << i << " ";
        }
    }
}