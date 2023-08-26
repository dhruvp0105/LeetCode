class Solution {
public:
    
    void solve(int index, string s, string &temp, vector<string> &ans, unordered_map<char,string> &mp){
        
        if(index == s.size()){
            ans.push_back(temp);
        }
        
        string str = mp[s[index]];
        for(int i=0;i<str.size();i++){
            temp.push_back(str[i]);
            solve(index+1,s,temp,ans,mp);
            temp.pop_back();
        }
        
    }
    
    vector<string> letterCombinations(string digits) {
        
        if(digits.size() == 0){
            return {};
        }
        
        unordered_map<char,string> mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
        
        vector<string> ans;
        string temp = "";
        solve(0, digits, temp, ans, mp);
        
        return ans;
    }
};