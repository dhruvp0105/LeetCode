class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        for(auto n : nums){
            mp[n]++;
        }
        
        int max_count=0;
        for(auto i : mp){
            max_count = max(max_count,i.second);
        }
        
        int ans = 0;
        for(auto x : mp){
            if(x.second == max_count){
                ans += max_count;
            }
        }
        
        return ans;
    }
};