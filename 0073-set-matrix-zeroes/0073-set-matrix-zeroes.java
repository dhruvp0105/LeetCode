class Solution {
    public void setZeroes(int[][] matrix) {
        Set<Integer> s1 = new HashSet<>();
        Set<Integer> s2 = new HashSet<>();
        
        for(int i=0;i<matrix.length;i++){
            for(int j=0;j<matrix[0].length;j++){
                if(matrix[i][j] == 0){
                    s1.add(i);
                    s2.add(j);
                }
            }
        }
        
        for(int row : s1){
            for(int i=0;i<matrix[0].length;i++){
                matrix[row][i] = 0;
            }
        }
        
        for(int col : s2){
            for(int i=0;i<matrix.length;i++){
                matrix[i][col] = 0;
            }
        }
        
        
    }
}