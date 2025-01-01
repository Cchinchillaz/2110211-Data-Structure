#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,t;
    int r1,c1,r2,c2;
    cin >> n >> m >> t;
    int a[n][m];

    for(int i=0;i<n;++i){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }

    for(int i=0; i<t; ++i){
        cin >> r1 >> c1 >> r2 >> c2;
        if(r1>r2 || c1>c2){cout << "INVALID" << endl;}
        else if(r2<1 || c2<1  || r1>n || c1>m ){cout << "OUTSIDE" << endl;}
        else{
            r1 = max(r1,1);
            c1 = max(c1,1);
            r2 = min(r2,n);
            c2 = min(c2,m);
            int m = a[r1-1][c1-1];
            for(int i=r1-1; i<r2; ++i){
                for(int j=c1-1; j<c2; ++j){
                    if(a[i][j] > m){m = a[i][j];}
                }
            }
            cout << m << endl;
        }

    }

}