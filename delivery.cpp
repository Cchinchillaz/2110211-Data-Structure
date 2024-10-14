#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,x,store,price;
    cin >> n >> m;
    int p[m];
    vector<int> money = {0};
    for(int i=0;i<m;++i){cin >> p[i];}
    queue<int> order1;
    queue<int> order2;
    for(int i=0;i<n;++i){
        cin >> x;
        if(x==1){
            cin >> store >> price;
            if(store == 1) order1.push(price);
            else order2.push(price);
            }
        if(x==2){
            if(order1.empty()){money.push_back(money.back()+order2.front()); order2.pop();}
            else if(order2.empty()){money.push_back(money.back()+order1.front()); order1.pop();}
            else{
            if(order2.front()<order1.front()) {money.push_back(money.back()+order2.front()); order2.pop();}
            else{money.push_back(money.back()+order1.front()); order1.pop();}
            }
        }
    }
    for(int i:p){
        auto it = lower_bound(money.begin(),money.end(),i);
        if(it>= money.end()) cout << -1 << " ";
        else cout << it-money.begin() << " ";
    }
}