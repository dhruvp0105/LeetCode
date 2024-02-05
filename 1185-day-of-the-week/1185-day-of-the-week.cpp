class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        
        string days[]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        int months[]={31,28,31,30,31,30,31,31,30,31,30,31};
        int ans=4;
        
        for(int i=1971;i<year;i++){
            if(i % 400 == 0 || (i % 4 == 0 && i % 100 != 0)){
                ans += 1;
            }
            ans += 365;
        }
        
        for(int i=1;i<month;i++){
            if(i==2 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))){
                ans += 1;
            }
            ans += months[i-1];
        }
        
        ans += day;
        
        return days[ans%7];
    }
};