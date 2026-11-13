class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps = 0;
        int size = plants.size();
        int c = capacity;
        for(int i = 0; i<size; i++){
            steps++;
            if(c < plants[i]){
                steps += i+i;
                c = capacity;
                c -= plants[i];
            }
            else{
                c -= plants[i];
            }
        }

        return steps;
    }
};