class Solution {
public:
    
    bool isValid(int row,int col,vector<vector<char>> &board,int norow,int nocol){
        if(row >= 0 && row < norow && col >= 0 && col < nocol && board[row][col] == 'O'){
            return true;
        }
        return false;
    }
    
    void dfs(int row,int col,vector<vector<char>> &board,int norow,int nocol){
        board[row][col] = 'B';
        if(isValid(row+1,col,board,norow,nocol)){
            dfs(row+1,col,board,norow,nocol);
        }
        if(isValid(row-1,col,board,norow,nocol)){
            dfs(row-1,col,board,norow,nocol);
        }
        if(isValid(row,col+1,board,norow,nocol)){
            dfs(row,col+1,board,norow,nocol);
        }
        if(isValid(row,col-1,board,norow,nocol)){
            dfs(row,col-1,board,norow,nocol);
        }
    }
        
    void solve(vector<vector<char>>& board) {
        
        int norow = board.size();
        int nocol = board[0].size();
        
        for(int i=0;i<norow;i++){
            
            // left -> top to bottom
            int j = 0;
            if(board[i][j] == 'O'){
                dfs(i,j,board,norow,nocol);
            }
            
            //right -> top to bottom
            j = nocol-1;
            if(board[i][j] == 'O'){
                dfs(i,j,board,norow,nocol);
            }
        }
        
        for(int i=0;i<nocol;i++){
            
            // top -> left to right
            int j = 0;
            if(board[j][i] == 'O'){
                dfs(j,i,board,norow,nocol);
            }
            
            // bottom -> left to right
            j = norow-1;
            if(board[j][i] == 'O'){
                dfs(j,i,board,norow,nocol);
            }
        }
        
        for(int i=0;i<norow;i++){
            for(int j=0;j<nocol;j++){
                if(board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
            }
        }
        
        for(int i=0;i<norow;i++){
            for(int j=0;j<nocol;j++){
                if(board[i][j] == 'B'){
                    board[i][j] = 'O';
                }
            }
        }
        
    }
};