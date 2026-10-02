class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> st;
        int vecsize = nums.size();
        int setsize;
        for(int i = 0; i<vecsize; i++){
            st.insert(nums[i]);
        }
        setsize = st.size();
        if(vecsize == setsize){
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