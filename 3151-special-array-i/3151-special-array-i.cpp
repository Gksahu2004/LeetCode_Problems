class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int size = nums.size();
        for(int i = 0; i<size-1; i++){
            if(abs(nums[i] - nums[i+1]) % 2 == 0){
                return false;
            }
        }

        return true;
    }
};