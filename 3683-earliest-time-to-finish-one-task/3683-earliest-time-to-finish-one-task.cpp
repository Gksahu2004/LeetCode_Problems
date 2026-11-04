class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int minimum = tasks[0][0] + tasks[0][1];
        int size = tasks.size();
        for(int i = 1; i<size; i++){
            int sum = tasks[i][0] + tasks[i][1];
            if(minimum > sum){
                minimum = sum;
            }
        }

        return minimum;
    }
};