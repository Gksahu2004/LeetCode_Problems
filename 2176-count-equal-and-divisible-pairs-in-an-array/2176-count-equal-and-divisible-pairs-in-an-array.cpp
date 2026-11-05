class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int count = 0;
        int size = nums.size();
        for(int i = 0 ; i<size-1; i++){
            for(int j = i+1; j<size; j++){
                if((nums[i] == nums[j]) && ((i*j) % k == 0)){
                    count++;
                }
            }
        }

        return count;
    }
};