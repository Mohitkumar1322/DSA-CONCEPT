#include<bits/stdc++.h>
using namespace std;

//utility function to add an edge to the undirected graph

void addEdge(vector<int> adj[],int u , int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

//utility function to print the adjacency list representation of the graph

void printGraph(vector<int> adj[],int V){
    for(int v =0;v<V; v++){
        cout<<"Adjacency list of vertex "<<v<<endl;
        cout<<"head";
        for(int i =0; i<adj[v].size();i++){
            cout<<"-> "<<adj[v][i];
        }
    }
}

int main(){
    int V =2;
    vector<int> adj[V];

    addEdge(adj,0,1);
    addEdge(adj,0,2);
    printGraph(adj,V);


    
}