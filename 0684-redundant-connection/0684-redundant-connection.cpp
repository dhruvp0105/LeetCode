class Solution {
public:
    
    bool isCycle(int src,vector<int> adj[],vector<bool> &visited,int parent){
        visited[src] = true;
        for(auto ele:adj[src]){
            if(ele != parent){
                if(visited[ele]){
                    return true;
                }
                if(!visited[ele] && isCycle(ele,adj,visited,src)){
                    return true;
                }
            }
        }
        return false;
    }
    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {

        int n = edges.size();
        
        vector<int> adj[n+1];
        
        for(int i=0;i<n;i++){
            
            vector<bool> visited(n+1,false);    
            
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            
            if(isCycle(edges[i][0],adj,visited,-1)){
                return edges[i];
            }
        }
        return {};
    }
};