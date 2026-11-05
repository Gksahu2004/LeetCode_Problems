class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int count = 0;
        int psize = points.size();
        for(int i = 1; i<psize; i++){
            int d1 = abs(points[i][0] - points[i-1][0]);
            int d2 = abs(points[i][1] - points[i-1][1]);
            if(d1 == d2){
                count += d1;
            }
            else if(d1 < d2){
                count += d2;
            }
            else{
                count += d1;
            }
        }

        return count;
    }
};