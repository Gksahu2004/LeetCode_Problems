class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        // vector<vector<int>> ans;
        // sort(nums.begin(), nums.end());
        // int n = nums.size();

        // do{
        //     vector<int> vec;
        //     for(int i = 0; i<n; i++){
        //         vec.push_back(nums[i]);
        //     }
        //     ans.push_back(vec);

        // }while(next_permutation(nums.begin(), nums.end()));

        // return ans;

        sort(nums.begin(), nums.end());
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