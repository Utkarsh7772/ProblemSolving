class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
         int n = size(graph);
        vector<int> vis(n,0),color(n,0);

        function<bool(int,int)> dfs = [&](int v,int c) -> bool {
            vis[v] = 1;
            color[v] = c;
            for(auto child:graph[v]){
                if(!vis[child]){
                    if(!dfs(child,c^1)) 
                        return false;
                }else{
                    if(color[v] == color[child])
                        return false;
                }
            }
            return true;
        };

        for(int i=0;i<n;++i) if(!vis[i]) if(!dfs(i,0))
            return false;
        return true;
    }
};