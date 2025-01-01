#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    vector<int> v;
    string a;
    int n,b;
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> a;
        if(a == "pb"){cin >> b;v.push_back(b);}
        else if(a == "sa"){sort(v.begin(),v.end());}
        else if(a=="sd"){sort(v.begin(),v.end(),greater<int>());}
        else if(a == "r"){reverse(v.begin(),v.end());}
        else if(a=="d"){cin >> b;v.erase(v.begin()+b);}
    }
    for(int i:v){cout<<i<< " ";}
    
}