class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int val = nums[size-1];

        int ans = 0;
        for(int i = 0; i<size; i++){
            ans += val - nums[i];
        }

        return ans;
    }
};