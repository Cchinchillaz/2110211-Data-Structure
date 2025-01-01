#include<bits/stdc++.h>
using namespace std;

void attack(vector<char> &power, string input){
  bool f;
  bool temp[power.size()] = {0};
  auto it = power.begin();
  while(it < power.end()){
    it = find(it,power.end(),input[0]);
    if(it < power.end()){
      f = true;
      for(int i=0;i<input.length();++i){
        if(*(it+i) != input[i]) f = false;
      }
    }
    else f = false;
    if(f){
      int n = it-power.begin();
      for(int i=0;i<input.length();++i){
        temp[n+i] = 1;
      }
    }
    it++;
  }
  vector<char> newv;
  for(int i=0;i<power.size();++i){
    if(!temp[i]) newv.push_back(power[i]);
  }
  power = newv;
}

int main(){

 auto it = {1,2,3,4};
 queue<int> q(it);
 set<pair<int,int>> s;
 while(!q.empty()){
  s.insert({q.size(),q.front()}); q.pop();
 }
 for(auto it = s.begin();it != s.end(); ++it){
  q.push(it->second);
 }

 cout << q.front();
   
}