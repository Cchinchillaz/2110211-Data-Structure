#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(0);
  int n,x;
  cin >> n;
  map<int,int> m;
  bool f = true;
  for(int i=0; i<n; ++i){
    cin >> x;
    if(x<=0 || x>n){f = false; break;}
    if(m.find(x) == m.end()){++m[x];}
    else f = false;
  }
  if(f) cout << "YES";
  else cout << "NO";
}