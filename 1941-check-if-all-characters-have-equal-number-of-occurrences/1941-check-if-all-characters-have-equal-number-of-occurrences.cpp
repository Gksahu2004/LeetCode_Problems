class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int size = s.size();
        int count = 0;
        unordered_map<char,int> mpp;
        for(int i = 0; i<size; i++){
            mpp[s[i]]++;
        }
        for(auto it: mpp){
            if(count == 0){
                count = it.second;
            }
            else{
                if(it.second != count){
                    return false;
                }
            }
        }
        return true;
    }
};