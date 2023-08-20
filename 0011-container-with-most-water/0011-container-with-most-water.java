class Solution {
    public int maxArea(int[] height) {
        
        int left = 0;
        int right = height.length-1;
        int max = 0;
        
        while(left < right){
            
            int lp = height[left];
            int rp = height[right];
            
            int min = Math.min(lp, rp);
            max = Math.max(max, min*(right-left));
            
            if(lp < rp){
                left++;
            }
            else{
                right--;
            }
        }
        return max;
    }
}