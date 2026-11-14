class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;
        int size = s.size();
        for(int i = 0; i<size-1; i++){
            if(s[i] != s[i+1] && abs(s[i] - s[i+1]) != 32){
                count++;
            }
        }

        return count;
    }
};