#include<bits/stdc++.h>
using namespace std;

class Test{
    public:
    Test(){cout << "CON"<< endl; x=10;}
    ~Test(){ cout<< x << endl;}
    int x;
};

void tmp1(){
    Test a;
}
int main(){
    // vector<vector<string>> v = {{"a","b","c"},{"b","a","c"},{"c","a","b"}};
    // sort(v.begin(),v.end(), [](vector<string> a, vector<string> b){
    //     return make_pair(make_pair(a[1],a[2]),a[0])< make_pair(make_pair(b[1],b[2]),b[0]);
    // });
    // for(auto vec:v){
    //     for(auto s:vec) cout << s << " ";
    //     cout << endl;
    // }
    // Test x;
    // x.x = 20;
    // vector<Test> a(2);
    // a.push_back(x);
    int n = 0;
    if(++n == 2) cout << "h\n";
    cout << n;
    
}