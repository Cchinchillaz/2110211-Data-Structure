#include<bits/stdc++.h>
using namespace std;

int n,cnt;
bool check[500005] = {false};

void findChildren(int node){
   if(node >= n) return;
   --cnt;
   check[node] = true;
   findChildren(2*node + 1);
   findChildren(2*node + 2);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int node;
    cin >> n >> node;
    cnt = n;
    findChildren(node);
    cout << cnt << "\n";
    for(int i=0;i<n;++i){
        if(!check[i]) cout << i << " ";
    }
}