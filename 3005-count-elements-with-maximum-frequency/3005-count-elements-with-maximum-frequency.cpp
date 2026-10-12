class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int max = 0;
        for(auto it: nums){
            mpp[it]++;
            if(max < mpp[it]){
                max = mpp[it];
            }
        }
        int count = 0;
        for(auto it: mpp){
            if(it.second == max){
                count++;
            }
        }

        return count * max;
    }
};