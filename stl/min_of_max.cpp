#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base:: sync_with_stdio(false),cin.tie(0);
    int n,m,x;
    cin >> n >> m;

    vector<int> ch(n);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> power;
    vector<int> max(n,1);
    
    for(int i=0;i<m;++i){power.push(make_pair(1,i));}
    for(int i=0;i<n;++i){
        cin >> ch[i];
    }
    for(int i=0;i<n;++i){
        cin >> x;
        if(ch[i]> max[x]) max[x] = ch[i];
        power.push(make_pair(ch[i],x));
        
        while(true){
            auto p = power.top();
            if(p.first == max[p.second]){cout << p.first << " "; break;}
            else  power.pop();
        }
    }

}