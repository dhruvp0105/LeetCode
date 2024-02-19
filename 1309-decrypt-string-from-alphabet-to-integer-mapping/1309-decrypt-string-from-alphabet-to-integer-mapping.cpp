class Solution {
public:
    string freqAlphabets(string s) {
        
        unordered_map<string,string> mp;
        
        for(char ch='a';ch<='z';ch++){
            mp[to_string(ch-'a'+1)] = ch;
        }
        
        string ans="";
        int n = s.size();
        int i = 0;
        
        while(i < n){
            if(i+2 < n && s[i+2] == '#'){
                ans += mp[s.substr(i,2)];
                i += 3;
            }
            else{
                ans += mp[s.substr(i,1)];
                i++;
            }
        }
        
        return ans;   
    }
};