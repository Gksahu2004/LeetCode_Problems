class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int size = nums.size();
        for(int i = 0; i<size; i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
            if(it.second % 2 != 0){
                return false;
            }
        }

        return true;
    }
};