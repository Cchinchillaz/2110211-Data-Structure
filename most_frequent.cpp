#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(0);
  int n;
  string x;
  map<string,int> m;
  cin >> n;

  for(int i=0;i<n;i++){
    cin >> x;
    ++m[x];
  }
  int max = 0; string w = "";
  for(auto it = m.begin(); it!=m.end();++it){
    if(it->second >= max){
        max = it->second;
        if(it->first > w) w = it->first;
    }
  }
  cout << w << " " << max;
}