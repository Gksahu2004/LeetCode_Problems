class Solution {
public:
    double angleClock(int hour, int minutes) {
        double ans = abs((hour * 30) - (minutes * 5.5));
        if(ans <= 180 && ans >= 0) return ans;
        else return (360-ans);
    }
};