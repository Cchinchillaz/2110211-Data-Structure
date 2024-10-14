#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    bitset<1000000> check={0};
    int n,m,x;
    cin >> n >> m;
    int a[n];
    for(int i=0;i<n;){
        cin >> x;
        a[i++]=x;
        check[x] = 1;
    }
    for(int j=0;j<m;++j){
        cin >>  x;
        bool f=false;
        for(int i=0;i<n;++i){
            if(x-a[i]>=0 && x-a[i]<1e6 && x!=a[i]*2 && check[x-a[i]]){cout << "YES\n";f=true;break;}
        }
        if(!f){cout << "NO\n";}
    }

}