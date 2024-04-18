#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>


using namespace std;
class graph{
public:
    unordered_map<int , list<int>> adj;
    void addEdge(int u , int v, bool direction){
        //direction is true if the edge is directed
        //direction is false if the edge is undirected
        //create an edge from u to v
        adj[u].push_back(v);
        if(direction == 0){
            adj[v].push_back(u);
        }
    }
    void printadjList(){
        for(auto i : adj){
            cout << i.first << " -> ";
            for(auto j: i.second){
                cout << j << " , ";
            }
            cout<<endl;
        }
    }
};


int main(){
    int n ;
    cout<<"Enter the number of vertices in the graph: ";
    cin>>n;
    graph g;
    int m;
    cout<<"Enter the number of edges in the graph: ";
    cin>>m;
    for(int i = 0 ; i < m ; i++){
        int u , v;
        cout<<"Enter the vertices of the edge: ";
        cin>>u>>v;
        g.addEdge(u,v,0);

    }
    g.printadjList();
}