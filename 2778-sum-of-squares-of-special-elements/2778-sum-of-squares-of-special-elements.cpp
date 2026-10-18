class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum = 0;
        int size = nums.size();
        for(int i = 0; i<size; i++){
            if(size % (i+1) == 0){
                sum += nums[i] * nums[i];
            }
        }

        return sum;
    }
};