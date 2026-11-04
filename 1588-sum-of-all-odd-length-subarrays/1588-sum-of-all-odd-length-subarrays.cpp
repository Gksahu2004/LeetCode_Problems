class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int window = 1;
        int size = arr.size();
        int sum = 0;
        while(window <= size){
            for(int i = 0; i<=size-window; i++){
                for(int j = i; j<i+window; j++){
                    sum += arr[j];
                }
            }
            window += 2;
        }

        return sum;
    }
};