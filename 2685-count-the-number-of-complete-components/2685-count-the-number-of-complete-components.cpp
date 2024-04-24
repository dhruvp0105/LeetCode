class Solution {
public:
    
    int solve(map<int,vector<int>> mp,vector<bool> &visited,int src){
            visited[src] = true;
            
            queue<int> q;
            q.push(src);
            
            set<int> bfs;
            while(!q.empty()){
                int node = q.front();
                q.pop();
                bfs.insert(node);
                
                for(auto it : mp[node]){
                    if(!visited[it]){
                        visited[it] = true;
                        q.push(it);
                    }
                }
            }
            
            for(auto it : bfs){
                if(mp[it].size() != bfs.size()-1){
                    return 0;
                }
            }
            
            return 1;
        }
    
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        
        map<int,vector<int>> mp;
        for(int i=0;i<edges.size();i++){
            mp[edges[i][0]].push_back(edges[i][1]); 
            mp[edges[i][1]].push_back(edges[i][0]); 
        }
        
        vector<bool> visited(n,false);
        int ans = 0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                ans += solve(mp,visited,i);
            }
        }
        return ans;
    }
};