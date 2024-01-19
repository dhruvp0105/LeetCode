class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        
        vector<int> ans;
        for(int n : nums){
            for(char c : to_string(n)){
                ans.push_back(c - '0');
            }
        }
        
        return ans;
    }
};