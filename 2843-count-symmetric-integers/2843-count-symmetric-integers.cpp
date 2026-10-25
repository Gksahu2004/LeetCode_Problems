class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int i = low; i<=high; i++){
            string str = to_string(i);
            int length = str.length();
            int firsthalf = 0, secondhalf = 0;
            if(length % 2 == 0){
                int i;
                for(i = 0; i<length/2; i++){
                    firsthalf += str[i] - '0';
                }
                for(; i<length; i++){
                    secondhalf += str[i] - '0';
                }

                if(firsthalf == secondhalf) count++;
            }
        }

        return count;
    }
};