class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> map;
        
        for(int i=0;i<arr.size();i++){
            map[arr[i]]++;
        }
        
        set<int> s;
        for(auto [key,value] : map){
            s.insert(value);
        }
        
        return map.size()==s.size();
    }
};