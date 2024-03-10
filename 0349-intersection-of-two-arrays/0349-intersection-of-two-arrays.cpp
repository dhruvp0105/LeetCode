class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        unordered_map<int,int> mp;
        vector<int> ans;
        
        for(auto i : nums1){
            mp[i]++;
        }
        
        for(auto num : nums2){
            if(mp.find(num) != mp.end()){
                ans.push_back(num);
                mp.erase(num);
            }
        }
        
        return ans;
        
    }
};