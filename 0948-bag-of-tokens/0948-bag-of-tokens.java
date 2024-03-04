class Solution {
    public int bagOfTokensScore(int[] tokens, int power) {
        Arrays.sort(tokens);
        
        int start = 0;
        int end = tokens.length-1;
        int score = 0;
        int max = 0;
        
        while(start <= end){
            if(tokens[start] <= power){
                power -= tokens[start];
                score += 1;
                start++;
            } 
            else if(max>0){
                power += tokens[end];
                score -= 1;
                end--;
            }
            else{
                break;
            }
            max=Math.max(max,score);
            
        }
        
        return max;
    }
}