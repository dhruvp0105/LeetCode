class Solution {
public:
    string clearDigits(string s) {
        
        int start = 0;
        string ans = "";
        
        while(start < s.size()){
            if(!isdigit(s[start])){
                ans += s[start];
                start++;
            }
            else{
                ans.pop_back();
                start++;
            }
        }
        
        return ans;
    }
};