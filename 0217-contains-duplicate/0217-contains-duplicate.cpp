class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> st;
        for(int i = 0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        if(nums.size() == st.size()){
            return false;
        }
        return true;


        // // MY BEST APPROACH TILL NOW
        // sort(nums.begin(), nums.end());

        // int size = nums.size();

        // for(int i = 0; i<size-1; i++){
        //     if(nums[i] == nums[i+1]){
        //         return true;
        //     }
        // }

        // return false;


        // // APPROACH 1
        // unordered_map <int, int> mpp;

        // int size = nums.size();

        // for(int i = 0; i < size; i++){

        //     mpp[nums[i]]++;
        // }

        // for(auto it : mpp){
        //     if(it.second > 1){
        //         return true;
        //     }
        // }
        // return false;
    }
};