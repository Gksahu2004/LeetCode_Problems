class Solution {
public:
    int minElement(vector<int>& nums) {
        string str;
        int sum, minsum = numeric_limits<int>::max();
        for(int i = 0; i<nums.size(); i++){
            sum = 0;
            str = to_string(nums[i]);
            for(auto it: str){
                sum += (it - '0');
            }
            if(minsum > sum){
                minsum = sum;
            }
        }

        return minsum;
    }
};