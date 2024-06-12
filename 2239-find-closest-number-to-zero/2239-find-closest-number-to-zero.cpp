class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        if(nums[0] < 0 && nums[n-1] > 0)
        {
            for(int i=0;i<n-1;i++){
                if(nums[i] < 0 && nums[i+1] > 0){
                    if(abs(nums[i]) == nums[i+1]){
                        return nums[i+1];
                    }
                    else if(abs(nums[i]) < nums[i+1]){
                        return nums[i];
                    }
                    else{
                        return nums[i+1];
                    }
                }
            }
        }
        
        else if(nums[0] >= 0 && nums[n-1] > 0){
            return nums[0];
        }
        
        else{
            return nums[n-1];
        }
        return 0;
    }
};