class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count = 1;
        int maxcount = 0;
        int prev = nums[0];
        for(int i = 1; i<nums.size(); i++){
            if(nums[i] > prev){
                count++;
                prev = nums[i];
            }
            else{
                if(nums[i] != prev){
                    prev = nums[i];
                }
                maxcount = max(count, maxcount);
                count = 1;
            }
        }
        maxcount = max(count, maxcount);
        return maxcount;
    }
};