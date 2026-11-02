class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> vec;
        vec.push_back(pref[0]);

        int xorvalue = pref[0];

        for(int i = 1; i<pref.size(); i++){
            xorvalue ^= vec[i-1];
            xorvalue ^= pref[i];
            xorvalue ^= pref[i-1];
            vec.push_back(xorvalue);
        }

        return vec;
    }
};