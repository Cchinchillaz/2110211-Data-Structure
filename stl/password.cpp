#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,m,l;
    cin >> n >> m >> l;
    vector<int>k(l);
    string w;
    set<string> word;
    for(int i=0;i<l;++i){cin >> k[i];}
    while(n--){cin >> w; word.insert(w);}
    while(m--){
        cin >> w;
        for(int i=0;i<l;++i){
            w[i] = (w[i]-'a'+k[i])%26 + 'a';
        }
        cout << (word.count(w) ? "Match\n" : "Unknown\n");
    }
}