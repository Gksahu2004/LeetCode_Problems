class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> vec1;
        vector<int> vec2;
        int count = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] < pivot){
                vec1.push_back(nums[i]);
            }
            else if (nums[i] > pivot){
                vec2.push_back(nums[i]);
            }
            else{
                count++;
            }
        }

        while(count--){
            vec1.push_back(pivot);
        }

        for(auto it: vec2){
            vec1.push_back(it);
        }

        return vec1;
    }
};