class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;

        int size = nums.size();

        for(int i = 0; i<size-1; i++){

            for(int j = i+1; j<size; j++){

                int sum = nums[i] + nums[j];

                if(sum == target){
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
        }


        return ans;
    }
};