class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int size = nums.size();
        int sum = 0;
        for(int i = 0; i<size; i++){
            int count = 0;
            int j = i;
            while(j > 0){
                if(j % 2 == 1) count++;
                j /= 2;
            }
            if(count == k){
                sum += nums[i];
            }
        }

        return sum;
    }
};