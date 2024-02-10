class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        
        vector<int> index;
        vector<int> ans;
        
        for(int i=0;i<s.size();i++){
            if(s[i] == c){
                index.push_back(i);
            }
        }
        
        for(int i=0;i<s.size();i++){
            int min=INT_MAX;
            for(int j=0;j<index.size();j++){
                if(abs(i-index[j]) < min){
                    min = abs(i-index[j]);
                }
            }
            ans.push_back(min);
        }
        return ans;
    }
};