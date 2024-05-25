class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        unordered_set<int> s1;
        unordered_set<int> s2;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j] == 0){
                    s1.insert(i);
                    s2.insert(j);
                }
            }
        }
        
        for(auto x : s1){
            for(int i=0;i<col;i++){
                matrix[x][i] = 0;
            }
        }
        
        for(auto x : s2){
            for(int i=0;i<row;i++){
                matrix[i][x] = 0;
            }
        }
    }
};