class Solution {
public:
    int maxProduct(int n) {
        int maxproduct = 0;
        string s = to_string(n);
        for(int i = 0; i<s.length()-1; i++){
            for(int j = i+1; j<s.length(); j++){
                maxproduct = max(maxproduct, (s[i]-'0')*(s[j]-'0'));
            }
        }

        return maxproduct;
    }
};