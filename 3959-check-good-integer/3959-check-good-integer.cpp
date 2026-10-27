class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitsum = 0, squaresum = 0, ld;
        while(n != 0){
            ld = n % 10; 
            digitsum += ld;
            squaresum += ld * ld;
            n /= 10;
        }

        if(squaresum - digitsum >= 50) return true;
        else return false;
    }
};