#include<bits/stdc++.h>
using namespace std;

int getDigit(int x,int k){
 for(int i=0;i<k;++i){
    x /= 10;
 }
 return x%10;
}

void radixSort(vector<int> &data, int d) {
 queue<int> q[10];
 for (int k=0; k<d; k++) {
  for (auto &x : data) q[getDigit(x,k)].push(x);
  for (int i = 0,j = 0; i < 10; i++)
   while (!q[i].empty()) {
   data[j++] = q[i].front(); q[i].pop();
   }
 }
}

int main(){
    vector<int> v = {13,12,14,11};
    radixSort(v,2);
    for(int i:v) cout << i << " ";
}