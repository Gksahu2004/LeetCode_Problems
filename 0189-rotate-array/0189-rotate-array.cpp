class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        int d = k % size;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + d);
        reverse(nums.begin() + d, nums.begin() + size);
    }
};