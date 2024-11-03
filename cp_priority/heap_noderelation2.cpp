#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll findDepth(ll node, ll k){
    if(k==1) return node;
    ll depth = 0;
    ++node;
    node *= k-1;
    while(node >= k){
        node/=k;
        ++depth; 
    } 
    return depth;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll n,k,a,b;
    int ans;
    cin >> n;
    while(n--){
        ans = 3;
        cin >> k >> a >> b;
        if(findDepth(a,k) == findDepth(b,k)) ans = 4;
        else{
            if(a>b) swap(a,b);
            if((b-1)/k == a) ans = 1;
            else{
                while(b>a){
                    b = (b-1)/k;
                    if(b==a){ans = 2; break;}
                }
            }
        }
        cout << ans << " ";
    }
}