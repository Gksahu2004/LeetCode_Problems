class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elesum = 0;
        int digitsum = 0;
        for(int i = 0; i<nums.size(); i++){
            elesum += nums[i];
            string str = to_string(nums[i]);
            for(int j = 0; j<str.size(); j++){
                digitsum += (str[j] - '0');
            }
        }

        return abs(elesum - digitsum);
    }
};