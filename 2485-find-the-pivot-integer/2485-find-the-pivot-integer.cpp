class Solution {
public:
    int pivotInteger(int n) {
        if(n == 1) return 1;
        int totalsum = (n*(n+1))/2;

        int sum = 1;
        for(int i = 2; i<n; i++){
            if(sum+i == totalsum-sum){
                return i;
            }
            sum += i;
        }

        return -1;
    }
};