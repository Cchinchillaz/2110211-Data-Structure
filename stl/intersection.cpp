#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int m,n,x;
    vector<int> v1,v2,result;
    cin >> m >> n;
    for(int i=0;i<m;++i){cin >> x;v1.push_back(x);}
    for(int i=0;i<n;++i){cin >> x;v2.push_back(x);}
    sort(v1.begin(),v1.end());  sort(v2.begin(),v2.end());
    int j;
    for(int i=0;i<v1.size();++i){
      j =0;
      if(i>0 && v1[i-1]==v1[i]) continue;
      while(j < v2.size() && v1[i] > v2[j]){ j++;}
        if(j < v2.size() && v1[i] == v2[j]){ cout << v1[i] << " ";}
    }
    
}