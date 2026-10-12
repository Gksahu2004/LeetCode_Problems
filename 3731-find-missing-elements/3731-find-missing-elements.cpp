class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int min = nums[0];
        int max = nums[0];
        vector<int> vec;
        unordered_set<int> st;

        st.insert(nums[0]);
        for(int i = 1; i<nums.size(); i++){
            st.insert(nums[i]);
            if(nums[i] < min){
                min = nums[i];
            }
            if(nums[i] > max){
                max = nums[i];
            }
        }

        for(int i = min+1; i<max; i++){
            if(st.find(i) == st.end()){
                vec.push_back(i);
            }
        }

        return vec;
    }
};