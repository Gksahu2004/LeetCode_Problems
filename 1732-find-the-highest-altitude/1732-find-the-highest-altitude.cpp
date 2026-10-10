class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int num = 0, max = 0;
        for(int i = 0; i<gain.size(); i++){
            num += gain[i];
            if(num > max){
                max = num;
            }
        }

        return max;
    }
};