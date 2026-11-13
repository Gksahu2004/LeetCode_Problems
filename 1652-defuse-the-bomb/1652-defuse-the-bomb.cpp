class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int size = code.size();
        vector<int> vec(size);
        if(k == 0){
            for(int i = 0; i<size; i++){
                code[i] = 0;
            }
            return code;
        }
        else if(k > 0){
            for(int i = 0; i<size; i++){
                int n = k;
                int sum = 0;
                int j = i+1;
                while(n>0){
                    if(j == size) j = 0;
                    sum += code[j];
                    j++;
                    n--;
                }
                vec[i] = sum;
            }
            return vec;
        }
        else{
            k = abs(k);
            for(int i = 0; i<size; i++){
                int n = k;
                int sum = 0;
                int j = i-1;
                while(n>0){
                    if(j == -1) j = size-1;
                    sum += code[j];
                    j--;
                    n--;
                }
                vec[i] = sum;
            }
            return vec;
        }

        return {};
    }
};