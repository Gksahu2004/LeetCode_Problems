class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int flag = 0;
        int sum = 0;
        for(int i = 0; i<nums.size(); i++){
            if(flag == 0){
                sum += nums[i];
                flag = 1;
            }
            else{
                sum -= nums[i];
                flag = 0;
            }
        }

        return sum;
    }
};