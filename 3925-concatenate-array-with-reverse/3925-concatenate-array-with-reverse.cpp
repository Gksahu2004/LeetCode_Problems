class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(nums.begin(), nums.end());
        // int i = 0;
        // while(i < size){
        //     ans.push_back(nums[i]);
        //     i++;
        // }
        // i--;
        int i = size-1;
        while(i >= 0){
            ans.push_back(nums[i]);
            i--;
        }

        return ans;
    }
};