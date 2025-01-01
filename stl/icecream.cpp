#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,m,start;
    int a,b,s=0,count=0;
    cin >> n >> m >>start;
    vector<int>save(N,0);
    while(n--){
        cin >> a >> b;
        save[a]=b;
    }
    //generate save in day 0 to last day before changing
    save[0] = start;
    for(int i=1;i<=N;++i){
     if(save[i]==0) save[i]+=save[i-1]+start;
     else{start = save[i];save[i]+=save[i-1];}
    }
    //question
    for(int i=0;i<m;++i){
        cin >> a >> b;
        int s;
        if(a<save[b]) s = lower_bound(save.begin(),save.end(),a)-save.begin();
        else s = lower_bound(save.begin(),save.end(),a+save[b])-save.begin();
        cout << s << " "; 
    }
}