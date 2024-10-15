#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <vector>
using namespace std;
class DenseGraph{
public:
    DenseGraph() {
        // Your code here
        DenseGraph(3);
    }

    DenseGraph(int n_in) : n(n_in), edges(n_in) {
        // Your code here
        for (auto& x : edges)
            x.resize(n_in);
    }

    DenseGraph(const DenseGraph& G) : n(G.n), edges(G.edges){}

    void AddEdge(int a, int b) {
        // Your code here
        edges[a][b] = true;
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        edges[a][b] = false;
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        return edges[a][b];
    }

    DenseGraph Transpose() const {
        // Your code here
        DenseGraph T(n);
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                T.edges[i][j] = edges[i][j]; 
            }
        }

        return T;
    }

protected:
    int n;
    vector<vector<bool>> edges;
    // Your code here
};
#endif // __DENSE_GRAPH_H__
