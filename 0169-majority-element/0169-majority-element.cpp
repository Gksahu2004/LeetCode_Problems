class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();

        int majority_elem;
        int count = 0;

        for(int i = 0; i<size; i++){
            if(count == 0){
                majority_elem = nums[i];
                count++;
                i++;
            }
            if(i < size){
                if(nums[i] != majority_elem){
                    count--;
                }
                else{
                    count++;
                }
            }
            
        }

        count = 0;

        for(int i = 0;i<size; i++){
            if(nums[i] == majority_elem){
                count++;
            }
        }
        if(count >= size/2){
            return majority_elem;
        }
        else return -1;
    }
};