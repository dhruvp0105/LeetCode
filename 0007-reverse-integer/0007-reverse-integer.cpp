class Solution {
public:
    int reverse(int x) {
    
        long long rev = 0;
        int sign = 1;
        
        if(x < 0){
            sign = -1;
            x = -1ll*x;
        }
        
        while(x != 0){
            int rem = x % 10;
            rev = rev*10 + rem;
            
            cout<<rev<<" ";
            x /= 10;
        }
        cout<<INT_MAX<<rev<<endl;
        if(rev > INT_MAX || rev<INT_MIN){
            return 0;
        }
        if(rev >= INT_MAX-1 && sign == -1){
            return 0;
        }
        
        return sign*rev;
    }
};