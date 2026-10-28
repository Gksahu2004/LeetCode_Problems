class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int waviness = 0;
        for(int i = num1; i<=num2; i++){
            string s = to_string(i);
            if(s.length() >= 3){
                for(int i = 1; i<s.length()-1; i++){
                    if(((s[i]-'0') > (s[i-1]-'0') && (s[i]-'0') > (s[i+1]-'0')) || ((s[i]-'0') < (s[i-1]-'0') && (s[i]-'0') < (s[i+1]-'0'))){
                        waviness++;
                    }
                }
            }
        }

        return waviness;
    }
};