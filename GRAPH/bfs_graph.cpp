#include <bits/stdc++.h>

using namespace std;


/*Create a boolean array say visited[] of size V+1 where V is the number of vertices in the graph.
Create a Queue, mark the source vertex visited as visited[s] = true and push it into the queue.
Until the Queue is non-empty, repeat the below steps:
Pop an element from the queue and print the popped element.
Traverse all of the vertices adjacent to the vertex poped from the queue.
If any of the adjacent vertex is not already visited, mark it visited and push it to the queue.
*/

class solution{
    public:
    vector <int> bfsOfGraph(int V, vector<int> adj[]){
        int vis[V]={0};
        //taken a visited array of size V and initialized it with 0 
        vis[0]=1;
        //fir visited array ka 0th index ko 1 kar diya
        queue <int> q;

        //upr queue banaya
        q.push(0);

        //fir queue me 0 push kiya

        vector<int> bfs;
        //fir ek vector banaya jisme bfs ka path store hoga

        while(!q.empty()){
            //jab tak queue khali nahi hoti tab tak loop chalega
            int node = q.front();

            //node me queue ka front element dala
            q.pop();
            //queue ka front element pop kiya
            bfs.push_back(node);

            //fir bfs me node push kiya

            for(auto it: adj[node]){
                //fir node ke adjacent nodes ko traverse kiya
                if(!vis[it]){
                    //agar koi node visited nahi hai to usko visited kar diya
                    q.push(it);

                    //fir usko queue me push kiya
                    vis[it]=1;
                    //fir usko visited kar diya
                }
            }

        }
        return bfs;



    }


};

void addEdge(vector <int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printAns(vector <int> &ans){
    for(int i =0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    vector <int> adj[6];

    addEdge(adj, 0, 1); 
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);

    
    solution s;
    vector <int> ans = s.bfsOfGraph(5, adj);
    printAns(ans);
}