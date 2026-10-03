class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max1 = 1;
        int max2 = 1;

        for(int i = 0; i<nums.size(); i++){
            if (nums[i] == 0 || nums[i] == 1) continue;
            else{
                if(nums[i] >= max1){
                    max2 = max1;
                    if(max1 != nums[i]){
                        max1 = nums[i];
                    }
                }
                else{
                    if(nums[i] > max2){
                        max2 = nums[i];
                    }
                }
            }
        }
        int res = (max1-1) * (max2-1);
        return res;
    }
};