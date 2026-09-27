class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map <int, int> mpp;

        int size = nums.size();

        for(int i = 0; i < size; i++){

            mpp[nums[i]]++;
        }

        for(auto it : mpp){
            if(it.second > 1){
                return true;
            }
        }
        return false;
    }
};