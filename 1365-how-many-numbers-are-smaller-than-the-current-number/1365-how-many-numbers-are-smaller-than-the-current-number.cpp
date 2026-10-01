class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int size = nums.size();
        vector<int> vec(size);
        for(int i = 0; i<size; i++){
            int count = 0;
            for(int j = 0; j<size; j++){
                if(nums[j] < nums[i]){
                    count++;
                }
            }
            vec[i] = count;
        }
        return vec;
    }
};