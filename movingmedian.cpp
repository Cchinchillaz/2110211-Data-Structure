#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,w,x;
    cin >> n >> w;
    vector<int> v;
    for(int i=0;i<n;++i){
        cin >> x;
        v.push_back(x);
    }

    if(n == w){
        cout << *(v.begin()+(v.size()/2));
        return 0;
    }
    vector<int> a(v.begin(),v.begin()+w+1);
    sort(a.begin(),a.end());
    cout << a[w/2] << " ";

    for(int i = 0;i<n-w-1;i++){
        auto it = find(a.begin(),a.end(),v[i]);
        a.erase(it);

        it = lower_bound(a.begin(),a.end(),v[i+w+1]);
        a.insert(it,v[i + w + 1]);
        cout << a[w/2] << " ";
    }
}

