class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int count = 0;
        int sum = 0;
        sort(costs.begin(), costs.end());
        for(int i = 0; i<costs.size(); i++){
            sum += costs[i];
            if (sum <= coins){
                count++;
            }
            else{
                break;
            }
        }

        return count;
    }
};