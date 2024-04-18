#include <bits/stdc++.h>

using namespace std;
class Graph
{
    int v;
    list<int> *adj;
    void DFSUtil(int v, bool visited[]);
public:
    Graph(int v);
    void addEdge(int v, int w);
    void DFS(int v);
};



