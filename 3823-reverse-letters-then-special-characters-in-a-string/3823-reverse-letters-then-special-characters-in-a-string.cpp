class Solution {
public:
    string reverseByType(string s) {
        int i = 0, j = s.size()-1;
        while(i < j){
            while(i < j && (s[i] > 122 || s[i] < 97)){
                i++;
            }
            while(i < j && (s[j] > 122 || s[j] < 97)){
                j--;
            }
            if(i < j){
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        i = 0, j = s.size()-1;
        while(i < j){
            while(i < j && (s[i] <= 122 && s[i] >= 97)){
                i++;
            }
            while(i < j && (s[j] <= 122 && s[j] >= 97)){
                j--;
            }
            if(i < j){
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};