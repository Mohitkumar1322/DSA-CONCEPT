#include <bits/stdc++.h>
using namespace std;


//this code is to detect cycle in an undirected graph using BFS


class Solution {
private:
    bool detectCycle(int src, vector<int> adj[], int vis[]) {

        // idhar ek function banaya hai jisme src node, adjancey list and visited array pass kiya hai
        vis[src] = 1;

        //fir visited array me src node ko visited kar diya or srd node phla node hai to usko 1 kar diya
        queue<pair<int, int>> q;

        //fir ek queue banaya jisme pair of int type ka data hoga
        q.push({src, -1});
        //fir queue me src node or -1 push kiya

        while (!q.empty()) {
            //jab tak queue khali nahi hoti tab tak loop chalega
            int node = q.front().first;

            //node me queue ka front element ka first element dala
            int parent = q.front().second;

            //fir parent me queue ka front element ka second element dala
            q.pop();
            for (auto adjacentNode : adj[node]) {

                //fir node ke adjacent nodes ko traverse kiya
                if (!vis[adjacentNode]) {

                    //agar adjacent node visited nahi hai to usko visited kar diya
                    vis[adjacentNode] = 1;

                    //fir usko visited kar diya
                    q.push({adjacentNode, node});

                    //fir usko queue me push kiya
                } else if (parent != adjacentNode) {
                    //agar parent node or adjacent node same nahi hai to cycle hai
                    return true;
                }
            }
        }
        return false;
    }

public:
    bool isCycle(int v, vector<int> adj[]) {
        int vis[v] = {0}; // Initialize all vertices as not visited
        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                if (detectCycle(i, adj, vis)) {
                    return true;
                }
            }
        }
        return false;
    }
};

void add_edge(vector<int> adj[], int src, int dest) {
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}
int main() {
    int v = 8; // Number of vertices
    vector<int> adj[v];
    // Creating graph given in the above diagram
    add_edge(adj, 0, 1);
    add_edge(adj, 0, 3);
    add_edge(adj, 1, 2);
    add_edge(adj, 3, 4);
    add_edge(adj, 3, 7);
    add_edge(adj, 4, 5);
    add_edge(adj, 4, 6);
    add_edge(adj, 4, 7);
    add_edge(adj, 5, 6);
    add_edge(adj, 6, 7);
    Solution obj;
    if (obj.isCycle(v, adj)) {
        cout << "Graph contains cycle";
    } else {
        cout << "Graph does not contain cycle";
    }
    return 0;
}
