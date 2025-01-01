#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m;
    map<string,string> mp;
    string father,son;
    cin >> n >>m;
    for (int i = 0; i < n; ++i){
      cin >> father >> son;
      mp[son] = father;
    }
    for(int i=0;i<m;++i){
      cin >> father >> son;
      cout << i <<  " " ;
      if (mp.find(son)==mp.end() || mp.find(father)==mp.end()){
        cout << "NO\n";
        continue;}
      else if(mp.find(mp[son])==mp.end() || mp.find(mp[father])==mp.end() || son==father){
        cout << "NO\n";
        continue;}
      if(mp[mp[father]]==mp[mp[son]]){
        cout << "YES\n";
      }
      else{
        cout << "NO\n";
        }
    }
}
