#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m,x;
    string a,b;
    cin >> n >> m;
    set<pair<string,string>> s;
    while(n--){
      cin >> a >> b;
      s.insert(make_pair(a,b));
    }
    while(m--){
      cin >> x;
      bool f = true;
      vector<pair<string,string>> v;
      while(x--){
        cin >> a >> b;
        if(f){
            auto it = s.find({a,b});
            if(it == s.end()) f = false;
            else{v.push_back({a,b});}
        }
      }
      if(f){
        cout << "YES\n";
        for(auto a:v){s.erase(a);}
    }
      else cout << "NO\n";
    }
}