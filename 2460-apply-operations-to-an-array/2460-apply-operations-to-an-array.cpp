class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int> vec;
        int size = nums.size();
        for(int i = 0; i<size-1; i++){
            if(nums[i] == nums[i+1]){
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }
        int count = 0;
        for(int i = 0; i<size; i++){
            if(nums[i] == 0){
                count++;
            }
            else{
                vec.push_back(nums[i]);
            }
        }
        for(int i = 1; i<=count; i++){
            vec.push_back(0);
        }
        return vec;
    }
};