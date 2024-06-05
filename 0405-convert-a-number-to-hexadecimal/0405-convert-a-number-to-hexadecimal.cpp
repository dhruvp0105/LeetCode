class Solution {
public:
    string toHex(int num) {
        
        if(num == 0){
            return "0";
        }
        
        string ans= "";
        u_int n = num;
        while(n != 0){
            int rem = n % 16;
            if(rem >= 0 && rem < 10){
                ans += rem + '0';
            }
            else if(rem >= 10 && rem < 16){
                ans += rem + 'a' - 10;
            }
            n /= 16;
        }
        string temp = "";
        for(int i=ans.size()-1;i>=0;i--){
            temp += ans[i];
        }
        return temp;
    }
};

