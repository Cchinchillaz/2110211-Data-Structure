#include<bits/stdc++.h>
using namespace std;

list<int> l;

list<int>::iterator isFrontSameColor(list<int>::iterator it){
    if(it == l.begin()) return it;
    auto curr = it;
    auto prev = --it;
    while(curr != l.begin() && *(prev) == *(curr)){
       --curr;
       if(prev != l.begin()) --prev;
    }
    return curr;
}

list<int>::iterator isBackSameColor(list<int>::iterator it){
    if(it == l.end()) return it;
    auto curr = it;
    auto next = ++it;
    while(next != l.end() && *(next) == *(curr)){
        ++next; ++curr;
    }
    if(curr != l.end()) ++curr;
    return curr;
}

int main(){
    int n,k,v,x;
    cin >> n >> k >> v;
    while(n--){
        cin >> x;
        l.push_back(x);
    }
    auto pos = l.begin();
    for(int i=0; i<k; ++i) ++pos;
    l.insert(pos,v);
    --pos;
  
    auto it1 = isFrontSameColor(pos);
    auto it2 = isBackSameColor(pos);
    int d = distance(it1,it2);

    while(d >= 3){
        pos = l.erase(it1,it2);
        it1 = isFrontSameColor(pos);
        it2 = isBackSameColor(pos);
        d = distance(it1,it2);
        int dfront = distance(it1,pos);
        if(dfront == 0) break;
    }
    for(int x:l) cout << x << " ";

}