class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int oddsum, evensum;
        int i = 1;
        while(n > 0){
            oddsum += i;
            i++;
            evensum += i;
            i++;
            n--;
        }

        int small = (oddsum<evensum)? oddsum : evensum;
        while(small > 0){
            if((oddsum % small == 0) && (evensum % small == 0)){
                return small;
            }
            small--;
        }

        return -1;
    }
};