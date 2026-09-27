class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> mpp;

        int size = nums.size();

        for(int i = 0; i<size; i++){

            mpp[nums[i]]++;
        }

        for(auto it : mpp){

            if(it.second > size/2){
                return it.first;
            }
        }
        return 0;
    }
};