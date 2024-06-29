class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        // next_permutation(nums.begin(),nums.end());
        
        int n = nums.size() - 1;
        int ind = -1;
        
        for(int i = n-1;i>=0;i--){
            if(nums[i] < nums[i+1]){
                ind = i;
                break;
            }
        }
        
        if(ind == -1){
            reverse(nums.begin(),nums.end());
            return;
        }
        
        for(int i=n;i>ind;i--){
            if(nums[i] > nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }
        
        sort(nums.begin()+ind+1,nums.end());
    }
};