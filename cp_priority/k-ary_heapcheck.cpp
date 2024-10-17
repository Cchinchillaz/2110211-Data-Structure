#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int m,n,k;
    cin >> m;
    while(m--){
        cin >> n >> k;
        vector<int> v(n);
        bool f = true;
        for(int i=0; i<n; ++i){
            cin >> v[i];
            if(i>0 && v[(i-1)/k] < v[i]){f = false;}
        }
        cout << (f ? "true" : "false") << '\n';
    }
}