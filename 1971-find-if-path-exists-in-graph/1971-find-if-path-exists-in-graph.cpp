class Solution {
public:
   bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        vector<vector<int>> adjList(n, vector<int>());
        for(const auto& edge : edges){
            adjList[edge[0]].push_back(edge[1]);
            adjList[edge[1]].push_back(edge[0]);
        }
        
        vector<bool> visited(n, false);        
        dfs(start, end, adjList, visited);
        return visited[end];
    }
    
    void dfs(int vertex, int end, vector<vector<int>>& adjList, vector<bool>& visited) {
        visited[vertex] = true;
        if(vertex == end)
            return;
        
        for(int to : adjList[vertex]){
            if(!visited[to]) {
                dfs(to, end, adjList, visited);
            }
        }
    }
};