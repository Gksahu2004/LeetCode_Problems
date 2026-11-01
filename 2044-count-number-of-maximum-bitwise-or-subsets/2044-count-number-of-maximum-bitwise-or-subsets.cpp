class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int size = nums.size();
        int count = 0;
        int maxbitor = 0;
        for(int i = 0; i<(1<<size); i++){
            int bitor1 = 0;
            for(int j = 0; j<size; j++){
                if(i & (1<<j)){
                    bitor1 = bitor1 | nums[j];
                }
            }
            if(bitor1 > maxbitor){
                maxbitor = bitor1;
                count = 1;
            }
            else if(bitor1 == maxbitor){
                count++;
            }
        }

        return count;
    }
};