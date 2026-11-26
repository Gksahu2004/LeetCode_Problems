class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        for(int i = 0; i<size; i++){
            if(nums[i] == original){
                original *= 2;
            }
        }
        return original;
    }
};