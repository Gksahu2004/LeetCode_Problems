class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int size = nums.size();
        int i;
        for(i = 0; i<size; i++){
            if(nums[i] == target){
                return i;
            }
            else if(nums[i] < target){
                continue;
            }
            else{
                break;
            }
        }
        return i;
    }
};