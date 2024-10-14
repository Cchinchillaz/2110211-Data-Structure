#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(0);
  int n,m,k,x;
  
  vector<int> v;
  cin >> n >> m >> k;
  for(int i=0;i<n;++i){
    cin >> x;
    v.push_back(x);
  }
  sort(v.begin(),v.end());
  for(int i=0;i<m;++i){
    cin >> x;
    auto it1 = lower_bound(v.begin(),v.end(),x-k);
    auto it2 = upper_bound(v.begin(),v.end(),x+k);
    cout << it2-it1 << " ";
  }
}