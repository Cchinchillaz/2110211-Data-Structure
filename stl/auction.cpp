#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false),cin.tie(0);
    int n,m,a;
    char o;
    cin >> n >> m >> a;
    vector<int> k(n);
    for(int i=0;i<n;++i){cin >> k[i];}
    vector<unordered_map<int,int>> bid(n);

    while(a--){
        cin >> o;
        int user,item;
        if(o == 'B'){
            int value;
            cin >> user >> item >> value;
            bid[--item][user] = value;
        }
        else if(o == 'W'){
            cin >> user >> item;
            bid[--item].erase(user);
        }
    }

    vector<vector<int>> u(m);
    for(int i=0;i<n;++i){
        priority_queue<pair<int,int>> q;
        for(auto &x:bid[i]){
            q.push(make_pair(x.second,x.first));
        }
        while(k[i]-- && !q.empty()){
            u[q.top().second-1].push_back(i+1);
            q.pop();
        }

    }
    for(int i=0;i<m;++i){
        if(u[i].empty()) cout << "NONE\n";
        else{
            for(int c:u[i]){cout << c << " ";}
            cout << "\n";
        }
    }
}