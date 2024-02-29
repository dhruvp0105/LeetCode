class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<int> indeg(numCourses,0);
        vector<int> adj[numCourses];
        vector<int> ans;
        
        for(auto i : prerequisites){
            adj[i[1]].push_back(i[0]);
            indeg[i[0]]++;
        }
        
        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(indeg[i] == 0){
                q.push(i);
            }
        }
        
        while(!q.empty()){
            int x=q.front();
            q.pop();
            ans.push_back(x);
            for(auto i : adj[x]){
                indeg[i]--;
                if(indeg[i] == 0){
                    q.push(i);
                }
            }
        }
        
        if(ans.size() == numCourses){
            return true;
        }
        
        return false;
        
    }
};