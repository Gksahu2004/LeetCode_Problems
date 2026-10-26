class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int, int> mpp;
        while(n != 0){
            mpp[n % 10]++;
            n /= 10;
        }

        int digit = -1, freq = 100;
        for(auto it : mpp){
            if(freq > it.second){
                freq = it.second;
                digit = it.first;
            }
            else if(freq == it.second && digit > it.first){
                digit = it.first;
            }
        }

        return digit;
    }
};