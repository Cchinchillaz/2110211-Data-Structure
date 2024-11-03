#include<bits/stdc++.h>
using namespace std;
bool check[200002] = {false};
int cnt,n;

void findDescendant(int node){
    if(node>=n) return;
    ++cnt;
    check[node] = true;
    findDescendant(2*node+1);
    findDescendant(2*node+2);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);;
    int node; cnt=0;
    cin >> n >> node;
    findDescendant(node);
    cout << cnt << "\n";
    for(int i=0;i<n;++i){
        if(check[i])cout << i << " ";
    }
}