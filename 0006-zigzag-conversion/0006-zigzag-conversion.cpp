class Solution {
public:
    string convert(string s, int numRows) {
        
        //base condition...
        if(numRows == 1){
            return s;
        }
        
        vector<string> ans(numRows);
        bool flag = false;     
        int i = 0;
        
        for(auto ch : s){
            ans[i] += ch;
            
            if(i == 0 || i == numRows-1){
                flag = !flag;
            }
            
            if(flag){   // if flag = true then increment i
                i++;
            }
            
            else{
                i--;    // if flag = false then decrement i
            }
        }
        
        string zigzag = "";
        for(auto str : ans){
            zigzag += str;
        }
        
        return zigzag;
    }
};