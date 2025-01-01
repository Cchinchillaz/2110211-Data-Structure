#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, first, last, ops;
    scanf("%d", &n);
    set<pair<int, int>> solds;

    while (n--) {

        scanf("%d", &ops);

        if (ops == 1) {

            scanf("%d %d", &first, &last);
            auto start = solds.lower_bound({first, 0});
            auto end = start;

            if (solds.size() && start != solds.begin()) {
                --start;--end;
                if (start->second >= first-1) {
                    first = start->first;
                } else ++start;
            }

            while (end != solds.end()) {
                if (end->first-1 <= last) {
                    last = max((end++)->second, last);
                    continue;
                } 
                break;
            }

            auto ins = solds.erase(start, end);
            solds.insert(ins, {first, last});

        } else {
            printf("%d\n", (int)solds.size());
        }        

    }

    return 0;

}

