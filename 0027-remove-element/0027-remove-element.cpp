class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int i = 0;
        int j = size - 1;
        // int k = nums.size();

        while(i <= j){
            while(i < size && nums[i] != val){
                i++;
            }
            while(j >= 0 && nums[j] == val){
                j--;
            }
            if(i < j){
                swap(nums[i], nums[j]);
            }
            else break;
        }
        return i;
    }
};