class Solution {
public:
    int maxDepth(string s) {
        int maxval = 0;
        int size = s.size();
        int count = 0;
        for(int i = 0; i<size; i++){
            if(s[i] >= '0' && s[i] <= '9' || s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*' ){
                continue;
            }
            else if(s[i] == '('){
                count++;
                maxval = max(maxval, count);
            }
            else if(s[i] == ')'){
                count--;
            }
        }

        return maxval;
    }
};