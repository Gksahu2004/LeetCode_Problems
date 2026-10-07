class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans;
        int i = 0;
        while(i < size){
            ans.push_back(nums[i]);
            i++;
        }
        i--;
        while(i >= 0){
            ans.push_back(nums[i]);
            i--;
        }

        return ans;
    }
};