class Solution {
public:
    int strStr(string haystack, string needle) {
        int size1 = haystack.size();
        int size2 = needle.size();

        for(int i = 0; i<= size1-size2; i++){
            int flag = 1;
            for(int j = 0; j<size2; j++){
                if(needle[j] != haystack[i+j]){
                    flag = 0;
                    break;
                }
            }
            if(flag == 1){
                return i;
            }
        }
        return -1;
    }
};