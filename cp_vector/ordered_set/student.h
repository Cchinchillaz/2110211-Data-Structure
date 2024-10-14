#include <vector>
#include <map>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    map<int,T> a;
    for(int i=0;i<A.size();++i){
        if(a.find(A[i]) == a.end()) {a[A[i]] = i; v.push_back(A[i]);}
    }
    for(auto x:B){
        if(a.find(x) == a.end()) v.push_back(x);
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    map<int,T> a;
    for(int i=0;i<B.size();++i){
        if(a.find(B[i]) == a.end()) {a[B[i]] = i;}
    }
    for(auto x:A){
        if(a.find(x) != a.end()) v.push_back(x);
    }
    return v;
}
