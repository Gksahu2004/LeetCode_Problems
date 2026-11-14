class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char, int> mpp;
        int n1 = s.size();
        int n2 = t.size();
        for(int i = 0; i<n2; i++){
            mpp[t[i]] = i;
        }
        int sum = 0;
        for(int i = 0; i<n1; i++){
            sum += abs(i - mpp[s[i]]);
        }

        return sum;
    }
};