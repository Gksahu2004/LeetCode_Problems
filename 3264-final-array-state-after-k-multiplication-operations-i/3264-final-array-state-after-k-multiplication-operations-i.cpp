class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int minimum;
        int idx;

        while(k != 0){
            minimum = nums[0];
            idx = 0;
            for(int i = 1; i<nums.size(); i++){
                if(nums[i] < minimum){
                    minimum = nums[i];
                    idx = i;
                }
            }

            nums[idx] *= multiplier;

            k--;
        }

        return nums;
    }
};