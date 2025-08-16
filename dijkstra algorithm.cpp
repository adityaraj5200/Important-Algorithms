class Solution {
public:
    vector<int> dijkstra(vector<vector<int>>& edges,int V,int src) {
        // build adjacency list
        vector<vector<pair<int,int>>> adj(V);
        for(auto &e : edges){
            int u=e[0], v=e[1], w=e[2];
            adj[u].push_back({v,w});
        }

        // initialize distances
        vector<int> dist(V,INT_MAX);
        dist[src]=0;

        // min-heap {distance,node}
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,src});

        while(!pq.empty()){
            auto [d,u]=pq.top();
            pq.pop();
            if(d>dist[u]) continue; // Reached this node with a longer distance so don't consider

            for(auto &[v,w] : adj[u]){
                if(dist[u]+w<dist[v]){
                    dist[v]=dist[u]+w;
                    pq.push({dist[v],v});
                }
            }
        }
        return dist;
    }
};
