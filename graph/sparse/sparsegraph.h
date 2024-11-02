#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__
#include <bits/stdc++.h>

// Your code here

using namespace std;

class SparseGraph{
public:
    SparseGraph() : SparseGraph(3) {}

    SparseGraph(int n_in) : V(n_in),E(n_in) {}

    SparseGraph(const SparseGraph& G) : V(G.V), E(G.E) {}

    void AddEdge(int a, int b) {
        // Your code here
        E[a].insert(b);
    }

    void RemoveEdge(int a, int b) {
        // Your code here
       E[a].erase(b);
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        return E[a].find(b) != E[a].end();
    }

    SparseGraph Transpose() const {
        // Your code here
        SparseGraph T(V);
        for (int i=0; i<E.size(); ++i) {
            for(auto &b: E[i]){
                T.AddEdge(b,i);
            }
        }
        return T;
    }

protected:
    // Your code here
   int V;
   vector<set<int>> E;
};
#endif // __SPARSE_GRAPH_H__

