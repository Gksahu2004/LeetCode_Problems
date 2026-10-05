class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> vec = nums;
        vector<vector<int>> ans;
        ans.push_back(vec);

        next_permutation(nums.begin(), nums.end());

        while(nums != vec){
            ans.push_back(nums);
            next_permutation(nums.begin(), nums.end());
        }

        return ans;
    }
};