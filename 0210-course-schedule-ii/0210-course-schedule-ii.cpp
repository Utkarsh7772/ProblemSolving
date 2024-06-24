class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>result;
        unordered_map<int,int>indegree;
        unordered_map<int,vector<int>>edges;
        for(auto &prereq : prerequisites )
        {
            indegree[prereq[0]]++;
            edges[prereq[1]].push_back(prereq[0]);
        }
        if(indegree.size()==numCourses)
            return result;
        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(indegree.count(i)==0)
                q.push(i);
        }
    while(!q.empty()){
        auto curr=q.front();
        q.pop();
        result.push_back(curr);
        
        for(auto &e : edges[curr]){
            if(--indegree[e] == 0){
                    q.push(e);
            }
        }
    }
    if(result.size()!=numCourses)
        result.clear();
    return result;  
    }
};