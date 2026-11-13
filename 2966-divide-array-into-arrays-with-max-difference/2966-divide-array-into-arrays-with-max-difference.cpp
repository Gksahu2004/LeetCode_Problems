class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        vector<vector<int>> vec;
        for(int i = 0; i<size; i+=3){
            vector<int> temp;
            if(nums[i+2] - nums[i] <= k){
                for(int j = i; j<i+3; j++){
                    temp.push_back(nums[j]);
                }
            }
            else{
                return {};
            }

            vec.push_back(temp);
        }

        return vec;
    }
};