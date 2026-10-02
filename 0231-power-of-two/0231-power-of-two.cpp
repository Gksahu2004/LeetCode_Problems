class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n % 2 != 0 && n != 1) return false;
        else {
            double num = 1;
            while(1){
                if(num == double(n)){
                    return true;
                }
                else if (num > double(n)){
                    break;
                }
                else{
                    num = num * 2;
                }
            }
            return false;
        }
    }
};