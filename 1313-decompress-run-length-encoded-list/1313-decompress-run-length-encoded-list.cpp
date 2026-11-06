class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> vec;
        int size = nums.size();
        for(int i = 0; i<size; i+=2){
            for(int j = 0; j<nums[i]; j++){
                vec.push_back(nums[i+1]);
            }
        }

        return vec;
    }
};