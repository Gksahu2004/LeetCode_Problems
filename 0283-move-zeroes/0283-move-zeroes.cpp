class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // brute force 
        int size = nums.size();
        int zeros = 0;
        vector <int> vec;

        for(int i = 0; i<size; i++){
            if(nums[i] != 0){
                vec.push_back(nums[i]);
            }
            else{
                zeros++;
            }
        }
        int vecSize = vec.size();
        for(int i = 0; i<vecSize; i++){
            nums[i] = vec[i];
        }
        for(int i = vecSize; i<size; i++){
            nums[i] = 0;
        }
    }
};