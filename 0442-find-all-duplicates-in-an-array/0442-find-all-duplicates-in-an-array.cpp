class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> vec;
        unordered_map<int, int> mpp;
        for(int i = 0; i<nums.size(); i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]] == 2){
                vec.push_back(nums[i]);
            }
        }

        return vec;
    }
};