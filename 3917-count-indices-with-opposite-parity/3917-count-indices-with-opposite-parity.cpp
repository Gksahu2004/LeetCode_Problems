class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int size = nums.size();
        int i = size-1;
        int even = 0, odd = 0;
        while(i >= 0){
            if(nums[i] % 2 == 0){
                even++;
                nums[i] = odd;
            }
            else{
                odd++;
                nums[i] = even;
            }

            i--;
        }

        return nums;
    }
};