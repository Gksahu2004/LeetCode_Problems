class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int num = nums[nums.size()-1];
        int sum = 0;
        for(int i = num; i<num+k; i++){
            sum += i;
        }

        return sum;
    }
};