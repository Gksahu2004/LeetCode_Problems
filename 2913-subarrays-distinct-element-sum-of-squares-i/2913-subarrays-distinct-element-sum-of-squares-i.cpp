class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int squaresum = 0;
        int size = nums.size();

        // FOR GENERATING ALL SUBARRAYS INCLUDING NON-CONTINUOUS ELEMENTS ALSO
        // SO THIS IS WRONG APPROACH
        // for(int i = 1; i<(1<<size); i++){
        //     unordered_set<int> st;
        //     for(int j = 0; j<size; j++){
        //         if(i & (1<<j)){
        //             st.insert(nums[j]);
        //         }
        //     }
        //     squaresum += (st.size() * st.size());
        // }

        for(int i = 0; i<size; i++){
            unordered_set<int> st;
            for(int j = i; j<size; j++){
                st.insert(nums[j]);
                squaresum += st.size() * st.size();
            }
        }

        return squaresum;
    }
};