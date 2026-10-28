class Solution {
public:
    int minOperations(int n) {
        int opcount = 0;
        for(int i = 0; i<n/2; i++){
            opcount += (n - (2*i+1));
        }

        return opcount;
    }
};