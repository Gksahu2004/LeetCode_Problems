class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> vec;
        sort(nums.begin(), nums.end());

        int i = 1;
        while(i<nums.size()){
            if(nums[i] != nums[i-1]){
                for(int j = nums[i-1]+1; j<nums[i]; j++){
                    vec.push_back(j);
                }
            }
            i++;
        }

        return vec;
    }
};