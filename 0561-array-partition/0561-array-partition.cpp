class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum = 0;
        sort(nums.begin(), nums.end());
        int size = nums.size();
        for(int i = 0; i<size; i+=2){
            sum += nums[i];
        }

        return sum;
    }
};