class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> vec;
        for(int i = 0; i<nums.size(); i++){
            string str = to_string(nums[i]);
            if(str.size() == 1){
                vec.push_back(nums[i]);
            }
            else{
                int size = str.size();
                for(int i = 0; i<size; i++){
                    vec.push_back(str[i] - '0');
                }
            }
        }

        return vec;
    }
};