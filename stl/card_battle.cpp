#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,m,x,a,count,r=0;
    bool f=true;
    vector<int>t;
    vector<int>check(n,false);
    cin >> n >> m;
    count =n;
    for(int i=0;i<n;++i){
        cin >> x;
        t.push_back(x);
    }
    sort(t.begin(),t.end());
    for(r;r<m;++r){
        cin >> x;
        if(count<x){f = false;break;}
        vector<int> o;
        for(int j=0;j<x;++j){cin >> a;o.push_back(a);}
        for(int a:o){
            int index= upper_bound(t.begin(),t.end(),a)-t.begin();
            while(index<n){
                if(!check[index]){check[index] = true;break;}
                ++index;
            }
            if(index>=n){f=false;break;}
            --count;   
        }
        if(!f)break;
    }
    if(f) cout << m+1;
    else cout << r+1;
}