class Solution {
public:
    double angleClock(int hour, int minutes) {
        double x = (hour+(minutes/60.0))*5 ; 
        x = fmod(x,60);
        double y = minutes ;
        double ans = abs(x-y) ; 

        ans = min(ans , 60-ans);

        return ans*6 ; 
        
    }
};