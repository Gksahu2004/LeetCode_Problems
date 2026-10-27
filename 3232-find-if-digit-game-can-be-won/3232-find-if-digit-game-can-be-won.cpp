class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i<nums.size(); i++){
            if(floor(log10(nums[i])) == 0){
                sum1 += nums[i];
            }
            else{
                sum2 += nums[i];
            }
        }
        if(sum1 != sum2) return true;
        else return false;
    }
};