#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,m,a,b;
    cin >> n >> m;
    while(m--){
        cin >> a >> b;
        bool f = false;
        if(a>b){
            while(a>0){
                a = (a-1)/2;
                if(a==b){f = true;break;}
            }
            if(f) cout << "b is an ancestor of a\n";
            else cout << "a and b are not related\n";
        }
        else if(b>a){
             while(b>0){
                b = (b-1)/2;
                if(a==b){f = true;break;}
            }
            if(f) cout << "a is an ancestor of b\n";
            else cout << "a and b are not related\n";
        }
        else cout << "a and b are the same node\n";
    }
   
}