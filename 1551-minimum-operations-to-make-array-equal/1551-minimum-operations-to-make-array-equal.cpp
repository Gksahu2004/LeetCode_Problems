class Solution {
public:
    int minOperations(int n) {
        int opcount = 0;
        int j = 1;
        for(int i = 0; i<n/2; i++){
            opcount += (n - j);
            j += 2;
        }

        return opcount;
    }
};