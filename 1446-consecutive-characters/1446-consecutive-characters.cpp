class Solution {
public:
    int maxPower(string s) {
        int count = 1;
        int maxcount = 1;
        char ch = s[0];
        for(int i = 1; i<s.size(); i++){
            if(s[i] == ch){
                count++;
            }
            else{
                maxcount = max(count, maxcount);
                count = 1;
                ch = s[i];
            }
        }
        maxcount = max(count, maxcount);
        return maxcount;
    }
};