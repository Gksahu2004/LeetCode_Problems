class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int even = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] % 2 == 0){
                even++;
            }
        }
        int i = 0;
        while(i<even){
            nums[i] = 0;
            i++;
        }
        while(i<nums.size()){
            nums[i] = 1;
            i++;
        }

        return nums;
    }
};