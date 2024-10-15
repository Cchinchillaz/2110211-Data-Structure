#include<bits/stdc++.h>
using namespace std;

bool check[500005] = {false};
int n,cnt;

void findChildren(int node){
   if(node>=n) return;
   check[node] = true;
   --cnt;
   findChildren(2*node+1);
   findChildren(2*node+2);
}

int main(){
    int node;
    cin >> n >> node;
    if(node == 0){cout << 0; return 0;}
    cnt = n;
    findChildren(node);
    cout << cnt << "\n";
    for(int i=0; i<n; ++i){
        if(!check[i]) cout << i << " ";
    }
}