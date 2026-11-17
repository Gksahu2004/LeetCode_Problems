class Solution {
public:
    bool checkDivisibility(int n) {
        int digitsum = 0, digitmul = 1;
        int k = n;
        while(k > 0){
            int ld = k % 10;
            digitsum += ld;
            digitmul *= ld;
            k /= 10;
        }

        return (n % (digitsum + digitmul) == 0);
    }
};