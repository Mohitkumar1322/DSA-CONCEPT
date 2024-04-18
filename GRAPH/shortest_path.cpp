#include <bits/stdc++.h>
using namespace std;

void add_edge(vector<int> adj[],int src,int dest){
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}

bool bfs(vector<int> adj[], int src, int dest,int v, int pred[],int dist[]){
    list<int> queue;
    bool visited[v];
    for(int i =0; i<v;i++){
        visited[i] = false;
        dist[i] = INT_MAX;
        pred[i] = -1;
    }
}