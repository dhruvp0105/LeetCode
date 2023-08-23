class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        // O(n^3) solution...
        
//         int n = nums.size();
//         set<vector<int>> set;
//         sort(nums.begin(),nums.end());  //we sort the vector bcz of same pair...
        
//         for(int i=0;i<n-2;i++){
//             for(int j=i+1;j<n-1;j++){
//                 for(int k=j+1;k<n;k++){
//                     if((nums[i] + nums[j] + nums[k]) == 0){
//                        set.insert({nums[i],nums[j],nums[k]});
//                     }
//                 }
//             }
//         }
        
//         vector<vector<int>> ans;
//         for(auto it:set){
//             ans.push_back(it);
//         }
        
//         return ans;
        
         
        
        // O(n^2) solution...
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> set;
        
        for(int i=0;i<n-2;i++){
            
            int start = i+1;
            int end = n-1;
            
            while(start < end){
                if((nums[i] + nums[start] + nums[end]) == 0){
                    set.insert({nums[i], nums[start], nums[end]});
                    start++;
                    end--;
                }
                else if((nums[i] + nums[start] + nums[end]) < 0){
                    start++;
                }
                else{
                    end--;
                }
            }
        }
        
        vector<vector<int>> ans;
        for(auto it : set){
            ans.push_back(it);
        }
        
        return ans;
        
    }
};