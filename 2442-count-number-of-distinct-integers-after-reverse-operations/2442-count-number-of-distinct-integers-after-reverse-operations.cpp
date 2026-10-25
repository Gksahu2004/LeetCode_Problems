class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<string> st;
        string s1;
        for(int i = 0; i<nums.size(); i++){
            s1 = to_string(nums[i]);
            st.insert(s1);
            reverse(s1.begin(), s1.end());
            if(s1[0] == '0'){
                int i = 0;
                while(s1[i] == '0') i++;
                s1 = s1.substr(i, s1.length());
                st.insert(s1);
            }
            else{
                st.insert(s1);
            }
        }

        return st.size();
    }
};