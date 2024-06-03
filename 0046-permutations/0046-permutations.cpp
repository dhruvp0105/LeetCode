class Solution {
public:
    vector<vector<int>> ans;
    
    void helper(vector<int> &nums,int index){
        if(index == nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j=index;j<nums.size();j++){
            swap(nums[index],nums[j]);
            helper(nums,index+1);
            swap(nums[index],nums[j]);
        }    
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        helper(nums,0);
        return ans;
    }
};