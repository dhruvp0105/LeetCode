class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        long int num=x;
        long int rem=0,temp=0;
        while(num > 0)
        {
            rem=num%10;
            temp=(temp*10)+rem;
            num=num/10;
        }
        if(temp==x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};