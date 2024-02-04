class Solution {
public:      
    
    bool isLeapYear(int y){
        if(y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)){
            return true;
        }
        return false;
    }
    
    int dayOfYear(string date) {
        
        int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
        int day=stoi(date.substr(8,2));
        int month=stoi(date.substr(5,2));
        int year=stoi(date.substr(0,4));
        int ans = day;
            
        if(isLeapYear(year)){
            days[1]=29;
        }
        
        
        for(int i=1;i<=month-1;i++){
            cout<<ans;
            ans += days[i-1];
        }
        
        return ans;
    }
    
    
};