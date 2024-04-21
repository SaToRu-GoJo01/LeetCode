class Solution {
public:
    void createAdjList(int n,vector<vector<int>> &edges,unordered_map<int,vector<int>>&adj){
        for(int i = 0; i < edges.size() ;i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }
    bool bfs(int source,int destination,unordered_map<int,vector<int>>&adj,vector<bool>&visited){
        queue<int> q;
        q.push(source);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto &i:adj[node]){
                if(!visited[i]){
                    q.push(i);
                    visited[i] = true;
                    if(i == destination){
                        return true;
                    }
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source == destination) return true;
        unordered_map<int,vector<int>> adj;
        createAdjList(n,edges,adj);
        vector<bool> visited(n,false);
        visited[source] = true;
        return bfs(source,destination,adj,visited);
    }
};
