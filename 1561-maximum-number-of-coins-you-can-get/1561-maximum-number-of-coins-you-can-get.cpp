class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int size = piles.size();
        int set = size/3;
        int count = 0;
        
        size--;
        while(set != 0){
            count += piles[size-1];
            size -= 2;
            set--;
        }
        
        return count;
    }
};