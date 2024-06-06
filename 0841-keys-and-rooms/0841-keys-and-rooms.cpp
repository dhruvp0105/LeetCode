class Solution {
public:
    
    void dfs(int i,vector<vector<int>> &adj,vector<bool> &visited){
        visited[i] = true;
        for(auto ele:adj[i]){
            if(!visited[ele]){
                dfs(ele,adj,visited);
            }
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        
        int n = rooms.size();
        vector<bool> visited(n,false);
        visited[0] = true;
        
        vector<vector<int>> adj(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<rooms[i].size();j++){
                adj[i].push_back(rooms[i][j]);
            }
        }
        
        dfs(0,adj,visited);
        
        int count=0;
        for(int i=0;i<n;i++){
            if(visited[i]==true){
                count++;
            }
        }
        cout<<count;
        if(count == n){
            return true;
        }
        return false;
    }
};