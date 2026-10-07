class Solution {
public:
    vector<int> minOperations(string boxes) {
        unordered_map<int, int> mpp;
        vector<int> vec;

        int size = boxes.size();

        for(int i = 0; i<size; i++){
            if(boxes[i] == '1'){
                mpp[i] = boxes[i];
            }
        }

        for(int i = 0; i<size; i++){
            int sum = 0;
            for(auto it: mpp){
                sum += abs(it.first - i);
            }
            vec.push_back(sum);
        }

        return vec;
    }
};