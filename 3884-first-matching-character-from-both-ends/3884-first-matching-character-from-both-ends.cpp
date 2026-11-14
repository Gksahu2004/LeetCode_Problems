class Solution {
public:
    int firstMatchingIndex(string s) {
        // int i = 0, j = s.size()-1;
        // while(i <= j){
        //     if(s[i] == s[j]) return i;
        //     i++;
        //     j--;
        // }
        // return -1;

        int size = s.size();
        for(int i = 0; i<=size/2; i++){
            if(s[i] == s[size - i - 1]){
                return i;
            }
        }
        return -1;
    }
};