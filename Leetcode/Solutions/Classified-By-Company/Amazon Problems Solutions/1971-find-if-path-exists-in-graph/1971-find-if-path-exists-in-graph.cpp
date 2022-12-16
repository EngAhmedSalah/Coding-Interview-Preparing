class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source == destination)
            return true;
        vector<vector<int> > adj(n);
        for(int i = 0 ; i < edges.size() ; ++i){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        queue<int> q;
        int vis[n + 1];
        vis[source] = 1;
        q.push(source);
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            for(auto v : adj[u])
            {
                if(vis[v] != 1)
                {
                    vis[v] = 1;
                    q.push(v);
                }
            }
        }
        return (vis[destination] == 1);
    }
};