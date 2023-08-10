class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        //Initialize Container
        unordered_map <int,int> map;
        vector<int> v;
        
        for(int i=0;i<nums.size();i++){
            if((map.find(target-nums[i])) != map.end()){  //if the element is found before the end of map
                v.push_back(i);
                v.push_back(map[target-nums[i]]);
                return v;
            } 
            else{
                map[nums[i]]=i;          
            }
        }
        return {-1,-1};
    }
};