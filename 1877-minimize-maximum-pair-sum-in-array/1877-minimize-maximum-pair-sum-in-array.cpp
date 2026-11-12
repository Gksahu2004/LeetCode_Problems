class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int maxval = nums[0]+nums[n-1];
        int i = 1, j = n-2;
        while(i < j){
            maxval = max(maxval, nums[i]+nums[j]);
            i++;
            j--;
        }

        return maxval;
    }
};