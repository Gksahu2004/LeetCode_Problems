class Solution {
public:
    int findGCD(vector<int>& nums) {
        int s = nums[0], l = nums[0];
        for(int i = 1; i<nums.size(); i++){
            if(s > nums[i]) s = nums[i];
            if(l < nums[i]) l = nums[i];
        }

        return gcd(s, l);
    }
};