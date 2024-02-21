class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        vector<int> a;
        int ans = nums.size();
        
        for(auto i : nums){
            mp[i]++;
        }
        
        int max_count = 0;
        int ele;
        for(auto x : mp){
            if(x.second > max_count){
                max_count = x.second;
                ele = x.first;
            }
        }
        
        for(auto x : mp){
            if(x.second == max_count){
                a.push_back(x.first);
            }
        }
        
        for(int k=0;k<a.size();k++){
            int start = 0;
            for(int i=0;i<nums.size();i++){
                if(nums[i] == a[k]){
                    start = i;
                    break;
                }
            }
        
            int end = 0;
            for(int i=nums.size()-1;i>=0;i--){
                if(nums[i] == a[k]){
                    end = i;
                    break;
                }
            }
        
            ans = min(ans,end - start + 1);
            cout<<ans<<" ";
        }
        return ans;
    }
};