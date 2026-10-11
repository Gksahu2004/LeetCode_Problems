class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> vec;
        int i = 0;
        int j = n;
        while (j < 2*n){
            vec.push_back(nums[i]);
            i++;
            vec.push_back(nums[j]);
            j++;
        }

        return vec;
    }
};