class Solution {
public:
    int pivotInteger(int n) {
        for(int i=1;i<=n;i++)
        {
            int preSum = i*(i+1) / 2;
            int postSum = (n*(n+1) / 2) - preSum + i; 
            
            if(preSum == postSum){
                return i;
            }
        }
        
        return -1;
    }
};