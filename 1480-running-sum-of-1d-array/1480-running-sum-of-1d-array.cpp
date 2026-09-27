class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int size = nums.size();

        int sum = 0;

        for(int i = 0; i<size; i++){

            sum += nums[i];
            nums[i] = sum;
        }

        return nums;
    }
};