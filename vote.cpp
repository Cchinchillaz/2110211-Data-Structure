#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(0);
  int n,k;
  string x;
  map<string,int> m;
  vector<int> v;
  cin >> n >> k;
  for(int i=0;i<n;++i){
    cin >> x;
    ++m[x];
  }
  for(auto &x:m){v.push_back(x.second);}
  sort(v.begin(),v.end(),greater<int>());
  k = min(k,(int)v.size());
  if(v[k-1]!=0) cout << v[k-1];
  else{
    int j=0;
    for(j;v[j];){++j;}
    cout << v[j];
  }
}