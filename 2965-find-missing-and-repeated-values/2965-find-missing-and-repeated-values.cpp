class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        unordered_set<int> st;
        int m = grid.size();
        int n = grid[0].size();
        int a,b;
        
        // find repeating numberi;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(st.count(grid[i][j]) !=  0){
                    a = grid[i][j];
                }
                st.insert(grid[i][j]);
            }
        }
        
        // find missing number
        for(int i=1;i<=m*n;i++){
            if(st.count(i) == 0){
                b = i;
            }
        }
        
        return {a,b};
    }
};