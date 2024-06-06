class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(auto i : s){
            mp[i]++;
        }
        
        vector<pair<int,char>> arr;
        for(auto i : mp){
            arr.push_back({i.second,i.first});
        }
        
        sort(arr.begin(),arr.end());
        
        string ans = "";
        for(int i=arr.size()-1;i>=0;i--){
            ans += string(arr[i].first,arr[i].second);
        }
        
        return ans;
    }
};