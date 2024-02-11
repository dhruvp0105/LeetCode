class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        unordered_map<char,int> mp;
        for(auto st : text){
            mp[st]++;
        }
        
        int count = 0;
        while(mp['b']>0 && mp['a']>0 && mp['l']>1 && mp['o']>1 && mp['n']>0){
            mp['b']--;
            mp['a']--;
            mp['l']--;
            mp['l']--;
            mp['o']--;
            mp['o']--; 
            mp['n']--;
            count++;
        }
        
        return count;
    }
};