class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> vec1;
        vector<int> vec2;

        for(int i = 0; i<nums.size(); i++){
            if(nums[i] >= 0) vec1.push_back(nums[i]);
            else vec2.push_back(nums[i]);
        }

        for(int i = 0; i<nums.size()/2; i++){
            nums[2 * i] = vec1[i];
            nums[2*i+1] = vec2[i];
        }

        return nums;
    }
};