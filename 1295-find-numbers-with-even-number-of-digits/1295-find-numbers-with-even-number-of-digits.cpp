class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        int size = nums.size();
        for(int i = 0; i<size; i++){
            string str = to_string(nums[i]);
            if(str.size() % 2 == 0){
                count++;
            }
        }
        return count;
    }
};