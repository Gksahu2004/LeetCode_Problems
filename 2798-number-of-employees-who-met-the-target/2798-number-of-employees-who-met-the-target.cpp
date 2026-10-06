class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count = 0;
        int size = hours.size();
        for(int i = 0; i<size; i++){
            if(hours[i] >= target){
                count++;
            }
        }

        return count;
    }
};