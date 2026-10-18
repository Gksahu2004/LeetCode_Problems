class Solution {
public:
    int alternateDigitSum(int n) {
        string str = to_string(n);

        int ans = 0;
        for(int i = 0; i<str.size(); i++){
            if(i%2 == 0){
                ans += str[i] - '0';
            }
            else{
                ans -= str[i] - '0';
            }
        }

        return ans;
    }
};