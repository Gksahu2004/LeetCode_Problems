class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        // vector<string> vec;
        // string s;
        int count, n, num;
        for(int i = 0; i<nums.size(); i++){
            // s = to_string(nums[i]);
            if(to_string(nums[i]).size() == 1){
                sum += nums[i];
            }
            else{
                count = 0;
                n = 0;
                num = 0;
                while(nums[i] != 0){
                    n = max(n, nums[i] % 10);
                    count++;
                    nums[i] /= 10;
                }
                while(count != 0){
                    num = num * 10 + n;
                    count--;
                }
                sum += num;
            }
        }

        return sum;
    }
};