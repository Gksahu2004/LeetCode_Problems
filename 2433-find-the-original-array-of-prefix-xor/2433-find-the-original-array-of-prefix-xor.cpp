class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> vec;
        vec.push_back(pref[0]);

        int xorvalue = 0;

        for(int i = 1; i<pref.size(); i++){
            xorvalue ^= vec[i-1];
            vec.push_back(xorvalue ^ pref[i]);
        }

        return vec;
    }
};