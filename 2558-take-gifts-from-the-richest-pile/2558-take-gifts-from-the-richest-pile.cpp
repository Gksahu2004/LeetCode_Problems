class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int size = gifts.size();
        while(k > 0){
            sort(gifts.begin(), gifts.end());
            gifts[size-1] = floor(sqrt(gifts[size-1]));
            k--;
        }
        long long sum = 0;
        for(int i = 0; i<size; i++){
            sum += gifts[i];
        }
        return sum;
    }
};