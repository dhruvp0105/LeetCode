class Solution {
public:
    string convertToBase7(int num) {
        
        if(num == 0){
            return "0";
        }
        
        bool neg = false;
        string s="";
        
        if(num < 0){
            neg = true;
            num = abs(num);        
        }
        
        while(num != 0){
            int rem = num % 7;
            s += rem + '0';
            num /= 7;
        }
        
        if(neg){
            s += '-';
        }
        
        reverse(s.begin(),s.end());        
        return s;
        
    }
};