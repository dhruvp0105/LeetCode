class Solution {
public:
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        int n = quiet.size();
        vector<int> adj[n];
        vector<int> indeg(n,0);
        for(auto it : richer)
        {
            adj[it[0]].push_back(it[1]);
            indeg[it[1]]++;
        }
        queue<int> q;
        vector<int> ans(n);
        for(int i=0;i<n;i++)
        {
            if(indeg[i] == 0)
            q.push(i);
            ans[i]=i;
        }
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            for(auto it:adj[node])
            {
                if(quiet[node]<quiet[it])
                {
                    quiet[it]=quiet[node];
                    ans[it]=ans[node];
                }
                indeg[it]--;
                if(indeg[it] == 0)
                q.push(it);
            }
        }
        return ans;
    }
};