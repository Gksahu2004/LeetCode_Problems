class Solution {
public:
    int climbStairs(int n) {
        // if(n <= 2){
        //     return n;
        // }
        // return climbStairs(n-1) + climbStairs(n-2);


        vector<int> vec;
        int i = 0;
        while(i <= n){
            if(i <= 2){
                vec.push_back(i);
            }
            else{
                vec.push_back(vec[i-1] + vec[i-2]);
            }
            i++;
        }
        return vec[n];
    }
};