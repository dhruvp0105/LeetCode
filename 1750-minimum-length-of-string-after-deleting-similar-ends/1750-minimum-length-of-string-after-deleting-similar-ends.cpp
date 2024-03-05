class Solution {
public:
    int minimumLength(string s) {
        int left = 0;  //0 1 2 3 4
        int right = s.size()-1;  // 7 6 5 4 3
        
        while(left < right && s[left] == s[right]){
                
            while(left <= right && s[left] == s[left+1]){
                left++;
            }
            
            while(left <= right && s[right] == s[right-1]){
                right--;
            }
            
            if(left > right){
                return right-left+1;
            }
            
            left++;
            right--;
        }
        
        return right-left+1;
    }
};