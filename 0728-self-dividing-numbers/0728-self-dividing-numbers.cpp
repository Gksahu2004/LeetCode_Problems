class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> vec;
        for(int i = left; i <= right; i++){
            int num = i;
            int flag = 1;
            while(num != 0){
                int rem = num % 10;
                if(rem == 0 || i % rem != 0){
                    flag = 0;
                    break;
                }
                num = num / 10;
            }
            if(flag == 1){
                vec.push_back(i);
            }
        }
        return vec;
    }
};