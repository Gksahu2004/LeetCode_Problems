class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<int, int> mpp1;
        unordered_map<int, int> mpp2;

        for(int i = 0; i<s.size(); i++){
            mpp1[s[i]]++;
        }
        for(int i = 0; i<t.size(); i++){
            mpp2[t[i]]++;
        }

        int count = 0;
        for(auto it: mpp2){
            if(mpp1.find(it.first) != mpp1.end()){
                if(it.second > mpp1[it.first]){
                    count += (it.second - mpp1[it.first]);
                }
            }
            else{
                count += it.second;
            }
        }

        return count;
    }
};