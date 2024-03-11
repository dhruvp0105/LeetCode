class Solution {
public:
    string customSortString(string order, string s) {
        
        string ans = "";
        
        unordered_map<char,int> mp;
        for(auto i : s){
            mp[i]++;
        }
        
        for(auto it : order){
            if(mp.find(it) != mp.end()){
                ans.append(mp[it],it);
                mp.erase(it);
            }
        }
        
        for(auto i : mp){
            ans.append(i.second,i.first);
        }
        
        
        return ans;
    }
};