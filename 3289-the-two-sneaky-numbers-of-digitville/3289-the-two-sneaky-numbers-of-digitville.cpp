class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        // unordered_map <int, int> mpp;
        // vector<int> vec;
        // for(int i = 0; i<nums.size(); i++){
        //     mpp[nums[i]]++;
        // }

        // for(auto it: mpp){
        //     if(it.second == 2){
        //         vec.push_back(it.first);
        //     }
        // }

        // return vec;

        vector<int> vec;
        int hash[103] = {0};
        for(int i = 0; i<nums.size(); i++){
            hash[nums[i]]++;
        }
        for(int i = 0; i<nums.size(); i++){
            if(hash[i] == 2){
                vec.push_back(i);
            }
        }
        
        return vec;

    }
};