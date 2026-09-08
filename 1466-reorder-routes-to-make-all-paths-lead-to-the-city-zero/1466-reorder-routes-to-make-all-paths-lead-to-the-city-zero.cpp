class Solution {
public:
    int ans = 0;

    void dfs(int node, int parent, vector<vector<pair<int,int>>>& adj) {
        for (auto [next, cost] : adj[node]) {
            if (next == parent) continue;
            ans += cost;
            dfs(next, node, adj);
        }
    }

    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int,int>>> adj(n);

        for (auto &e : connections) {
            adj[e[0]].push_back({e[1], 1});
            adj[e[1]].push_back({e[0], 0});
        }

        dfs(0, -1, adj);
        return ans;
    }
};