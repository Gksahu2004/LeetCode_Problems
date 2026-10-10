class Solution {
public:
    int maxDistinct(string s) {
        // unordered_set<char> st;
        // for(int i = 0; i<s.size(); i++){
        //     st.insert(s[i]);
        // }

        // return st.size();

        
        int count = 0;
        unordered_map <char, int> mpp;

        for(int i = 0; i<s.size(); i++){
            if(mpp[s[i]] == 0){
                count ++;
                mpp[s[i]]++;
            }
        }

        return count;
    }
};