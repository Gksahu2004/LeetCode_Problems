class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ops = 0;
        int size = nums.size();
        for(int i = 1; i<size; i++){
            if(nums[i-1] >= nums[i]){
                ops += (nums[i-1] - nums[i] + 1);
                nums[i] = nums[i-1] + 1;
            }
        }

        return ops;
    }
};