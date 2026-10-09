class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {

        int count = 0;
        for(int i = 0; i<nums.size(); i++){
            string str = to_string(nums[i]);
            for(int i = 0; i<str.size(); i++){
                if(str[i] - '0' == digit){
                    count++;
                }
            }
        }

        return count;
    }
};