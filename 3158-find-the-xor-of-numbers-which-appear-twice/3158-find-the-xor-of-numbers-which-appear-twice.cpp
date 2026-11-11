class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int size = nums.size();
        int xorval = 0;
        for(int i = 0; i<size; i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
            if(it.second == 2){
                xorval ^=  it.first;
            }
        }

        return xorval;
    }
};