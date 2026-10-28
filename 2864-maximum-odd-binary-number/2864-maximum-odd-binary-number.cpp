class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int ones = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '1') ones++;
        }

        int length = s.size();
        s = "";

        for(int i = 0; i<ones-1; i++){
            s += '1';
        }

        for(int i = 0; i<length-ones; i++){
            s += '0';
        }

        s += '1';

        return s;
    }
};