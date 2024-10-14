#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,start,end;
    cin >> n;
    map<int,int> mp;
    for(int i=1;i<=n;++i){
        cin >> start >> end;
        auto it = mp.lower_bound(start);
        if(it->second > end || it == mp.end()){
            mp[end] = start;
            cout << i << " ";
        }
    }
}