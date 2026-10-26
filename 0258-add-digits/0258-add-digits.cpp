class Solution {
public:
    int addDigits(int num) {
        int temp;
        if(to_string(num).length() == 1) return num;
        else{
            while(to_string(num).length() != 1){
                temp = 0;
                while(num != 0){
                    temp += num % 10;
                    num /= 10;
                }
                num = temp;
            }
        }

        return num;
    }
};