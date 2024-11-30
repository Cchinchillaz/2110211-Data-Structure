#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a,b;
    cin >> n >> m;
    int hash[n] = {0};
    int status[n] = {0};

    for(int i=0; i<m; ++i){
        cin >> a >> b;
        int j = 0;
        if(a == 1){
            while(status[(b+j*j)%n] == 2){
                ++j;
            }
            status[(b+j*j)%n] = 2;
            hash[(b+j*j)%n] = b;
        }
        else if(a == 2){
            while(hash[(b+j*j)%n] != b && status[(b+j*j)%n] != 0){
                ++j;
            }
            if(hash[(b+j*j)%n] == b){
                status[(b+j*j)%n] = 1;
            }
        }
    }
   
    int q1 = 1,q2 = 1;
    for(int i = 0;i<n;++i){
        int j = 0;
        while(status[(i+j*j)%n] == 2) ++j;
        q1 = max(q1,j+1);

        j = 0;
        while(status[(i+j*j)%n] == 2 || status[(i+j*j)%n] == 1 ) ++j;
        q2 = max(q2,j+1);
    }
    cout << q1 << " " << q2;
}