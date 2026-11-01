class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int size = nums.size();
        
        int sum = 0;
        for(int i = 0; i<(1<<size); i++){
            int xorvalue = 0;
            for(int j = 0; j<size; j++){
                if(i & (1<<j)){
                    xorvalue = xorvalue ^ nums[j];
                }
            }
            sum += xorvalue;
        }

        return sum;
    }
};