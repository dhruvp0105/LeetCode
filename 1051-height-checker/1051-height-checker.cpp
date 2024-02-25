class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
        vector<int> temp;
        for(int i=0;i<heights.size();i++){
            temp.push_back(heights[i]);
        }
        
        sort(temp.begin(),temp.end());
        
        int ans=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i] != temp[i]){
                ans++;
            }
        }
        
        return ans;
        
    }
};