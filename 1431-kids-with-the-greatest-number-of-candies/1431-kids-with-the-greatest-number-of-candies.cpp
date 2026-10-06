class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maximum = -1;
        for(int i = 0; i<candies.size(); i++){
            maximum = max(maximum, candies[i]);
        }

        vector<bool> vec;
        for(int i = 0; i<candies.size(); i++){
            if(candies[i] + extraCandies >= maximum){
                vec.push_back(true);
            }
            else{
                vec.push_back(false);
            }
        }

        return vec;
    }
};