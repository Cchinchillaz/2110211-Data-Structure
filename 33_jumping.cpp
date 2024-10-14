#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v;
//top-down
int B(int i){

}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(0);
  int x;
  cin >> n;

  //bottom-up
  int dp[n];
  for(int i=0; i<n; i++){
   cin >> x;
   v.push_back(x);
  }
  
  dp[0] = v[0];
  dp[1] = v[0]+v[1];
  dp[2] = v[0]+v[2]+max(0,v[1]);
  
  for(int i=3;i<n;++i){
    dp[i] = max(max(dp[i-1],dp[i-2]),dp[i-3])+v[i];
  }
  cout << dp[n-1];
}