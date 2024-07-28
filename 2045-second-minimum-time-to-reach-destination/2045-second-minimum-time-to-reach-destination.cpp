class Solution {
public:
    int secondMinimum(int n, vector<vector<int>>& a, int time, int change) {
        vector<vector<int>> adj(n+1);
        vector<int> b(n+1,-1),c(n+1,-1);
        b[1]=0;
        for(int i=0;i<a.size();i++)
        {
            adj[a[i][0]].push_back(a[i][1]);
            adj[a[i][1]].push_back(a[i][0]);
        }
        queue<int> q;
        int ct=0;
        q.push(1);
        while(!q.empty())
        {
            int sz=q.size();
             ct+=time;
            while(sz--)
            {
                int node=q.front();
                q.pop();
                if(node==n && c[node]!=-1)
                 return c[node];
                for(auto& x:adj[node])
                {
                    if(b[x]==-1 || (c[x]==-1 && b[x]!=ct))
                    {
                        q.push(x);
                        if(b[x]==-1)
                         b[x]=ct;
                        else
                         c[x]=ct;
                    }
                }
            }
            if(((ct/change)%2)==1)
                  ct=change*(ct/change+1);
        }
        return c[n];
    }
};