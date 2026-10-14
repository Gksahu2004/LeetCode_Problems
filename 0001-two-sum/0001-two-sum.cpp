class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;

        unordered_map <int, int> mpp;

        // int size = nums.size();

        for(int i = 0; i<nums.size(); i++){
            int num = nums[i];
            int rem_num = target - num;

            if(mpp.find(rem_num) != mpp.end()){
                ans.push_back(i);
                ans.push_back(mpp[rem_num]);
                break;
            }
            else{
                mpp[num] = i;
            }
        }

        return ans;
    }
};