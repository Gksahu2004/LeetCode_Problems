class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        vector<vector<int>> vec;
        for(int i = 0; i<size; i+=3){
            if(nums[i+2] - nums[i] <= k){
                vec.push_back({nums[i], nums[i+1], nums[i+2]});
            }
            else{
                return {};
            }
        }

        return vec;
    }
};