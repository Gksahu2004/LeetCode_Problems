class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int bitwiseor = 0;
        int n = nums.size();
        bool flag = false;
        for(int i = 0; i<n; i++){
            if(nums[i] % 2 == 0){
                flag = true;
                bitwiseor |= nums[i];
            }
        }
        if(flag == false){
            return 0;
        }
        return bitwiseor;
    }
};