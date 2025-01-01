#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(0);
  cout << fixed << setprecision(2);
  int n,score;
  string s,t;
  map<string,int> a,b;
  cin >> n;
  for(int i=0;i<n;++i){
    cin >> s >> t >> score;
    a[s] += score; a[t] += score;
    ++b[s];++b[t];
  }
  for(auto [k,v]:a){cout << k << " " << (v+0.0)/b[k] << "\n";}
}