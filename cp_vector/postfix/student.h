#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>

using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
  stack<int> s;
  for(int i=0;i<v.size();++i){
    if(v[i].first==1){s.push(v[i].second);}
    else{
      int a = s.top();s.pop();
      int b = s.top();s.pop();
      if(v[i].second==0) s.push(a+b);
      else if(v[i].second==1)s.push(b-a);
      else if(v[i].second==2)s.push(b*a);
      else if(v[i].second==3)s.push(b/a);
    }
  }
  return s.top();
}

#endif
