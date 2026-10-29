class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int totalsum = 0;
        for(int i = 1; i<nums.size(); i++){
            totalsum += nums[i];
        }

        int count = 0;
        int sum = nums[0];
        for(int i = 1; i<nums.size(); i++){
            if((totalsum - sum) % 2 == 0){
                count++;
            }
            sum += nums[i];
            totalsum -= nums[i];
        }

        return count;
    }
};