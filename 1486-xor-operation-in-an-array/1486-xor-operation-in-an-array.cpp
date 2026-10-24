class Solution {
public:
    int xorOperation(int n, int start) {
        int bitxor = 0;
        for(int i = 0; i<n; i++){
            bitxor ^= (start + 2 * i);
        }

        return bitxor;
    }
};