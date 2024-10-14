#include <iostream>
#include <vector>
using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator it,int k) {
 int s = it-v.begin()-k,e = it-v.begin()+k+1;
 int l = v.size();
 s = max(0,s); e = min(l,e);
 vector<string>::iterator start = v.begin()+s;
 vector<string>::iterator stop = v.begin()+e;
 v.erase(start,stop);
 return v;
}
int main() {
 int n,j,k;
 cin >> n >> j >> k;
 vector<string> v(n);
 for (int i = 0;i < n;i++) {
 cin >> v[i];
 }
 cout << "Result after punch" << endl;
 vector<string> result = punch(v, v.begin() + j, k);
 for (auto &x : result) {
 cout << x << endl;
 }
}