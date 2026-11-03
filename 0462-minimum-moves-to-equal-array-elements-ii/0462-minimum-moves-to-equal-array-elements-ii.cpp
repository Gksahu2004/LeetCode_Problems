class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();

        // do not take average. instead take median
        // int sum = 0;
        // for(int i = 0; i<size; i++){
        //     sum += nums[i];
        // }
        // sum = ceil(sum/size);

        int medianval = nums[size/2];
        int ans = 0;
        for(int i = 0; i<size; i++){
            ans += abs(medianval - nums[i]);
        }

        return ans;

    }
};