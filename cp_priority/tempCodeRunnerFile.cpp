#include<bits/stdc++.h>
using namespace std;

//1. ปมหน่ึงเป็นลูกของอีกปมหน่ึง
// 2. ปมหน่ึงเป็นบรรพบุรุษของอีกปมหน่ึง
// 3. ปมทั้งสองอยู่คนละความลกึ (หรือระดับชั้นในต้นไม้) กัน
// 4. ปมทั้งสองอยู่ที่ความลึก (หรือระดับชั้นในต้นไม้) เดียวกัน
int findDepth(int node,int k){
    if(k==1) return node;
    int ans = 0;
    node += 1;
    node *= k-1;
    while(node >= k){
        node /= k;
        ++ans;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,k,a,b;
    cin >> n;
    for(int i=0; i<n; ++i){
        int ans = 3;
        cin >> k >> a >> b;
        if(findDepth(a,k) == findDepth(b,k)) ans = 4;
        else if(a<b){
            while(b > a){
                b = (b-1)/k;
                if(b==a) break;
            }
            if(b==a) ans = 1;
        }
        else if(a>b){
            while(a > b){
                a = (a-1)/k;
                if(b==a) break;
            }
            if(b==a) ans = 2;
        }

        cout << ans << " ";
    }
}