#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(0);
  int n,m,x;
  vector<int> v;
  set<int> s;
  cin >> n >> m;
  for(int i=0;i<n;++i){
    cin >> x;
    v.push_back(x);
  }
  for(int i=0;i<m;++i){
    cin >> x;
    for(int j=0;j<n;++j){
        if(v[j]==x) s.insert(x);
    }
  }

  for(auto it=s.begin();it != s.end();++it){
    cout << *it << " ";
  }

  return 0;
}