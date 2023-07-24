class Solution {
public:
    string reverseStr(string s, int k) {
        
        for(int i=0; i < s.length()-1; i += 2*k){
            
            int start = i;
            int a=i+k-1;
            int end = min(a, (int)(s.size()-1));
            while(start < end){
            
                swap(s[start],s[end]);
            
                start++;
                end--;
            }
        }
        
        return s;
    }
};