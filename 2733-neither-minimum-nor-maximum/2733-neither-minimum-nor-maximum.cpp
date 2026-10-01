class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int size = nums.size();
        for(int i = 1; i<size-1; i++){
            if (nums[i] != nums[0] || nums[i] != nums[size-1]){
                return nums[i];
            }
        }
        return -1;
    }
};