#include<bits/stdc++.h>
using namespace std;

int main(){
   long long n;
   int k, height = 0;
   cin >> n >> k;
   if(k == 1){cout << n-1; return 0;}
   n *= k-1;
   while(n >= k){
    n /= k;
    ++height;
   }
   cout << height;
}