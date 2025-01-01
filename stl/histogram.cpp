#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(0);
  int n;
  string x;
  map<string,int> m;
  set<pair<string,int>> s;
  cin >> n;
  for(int i=0;i<n;++i){
    cin >> x;
    ++m[x];
  }
  for(auto [k,v]:m){
    if(v > 1) s.insert(make_pair(k,v));
}
  for(auto k:s){cout << k.first << " " << k.second << "\n";}

}