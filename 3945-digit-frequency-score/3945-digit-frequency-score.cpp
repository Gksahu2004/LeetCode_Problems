class Solution {
public:
    int digitFrequencyScore(int n) {
        string str = to_string(n);
        unordered_map<int, int> mpp;
        for(int i = 0; i<str.size(); i++){
            mpp[str[i] - '0']++;
        }
        int sum = 0;
        for(auto it: mpp){
            sum += it.first * it.second;
        }

        return sum;
    }
};