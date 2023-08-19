class Solution {
public:
    int reverse(int x) {
    
        long long rev = 0;
        int sign = 1;
        
        if(x < 0){
            sign = -1;
            x = -1ll*x;   //if x = -2147483648 then x != 2147483648. x value ramain same. 
        }
        
        while(x != 0){
            int rem = x % 10;
            rev = rev*10 + rem;
            x /= 10;
        }
        
        if(rev > INT_MAX || rev<INT_MIN){
            return 0;
        }
        
        return sign*rev;
    }
};