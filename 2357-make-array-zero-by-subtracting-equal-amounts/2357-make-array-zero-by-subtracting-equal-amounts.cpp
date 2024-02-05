class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        
        int ans=0;
        sort(nums.begin(),nums.end());
        int mini;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0){
                mini=nums[i];
                for(int j=i;j<nums.size();j++){
                    nums[j] -= mini;
                }
                
                ans++;
            }
        }
        return ans;
    }
};