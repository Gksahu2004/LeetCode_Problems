class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        map<double, int> mpp;
        // for(int i = arr.size()-1; i>=0; i--){
        //     if(mpp[double(arr[i])] != 0){
        //         return true;
        //     }
        //     mpp[double(arr[i])/2]++;
        // }

        int i = arr.size() - 1;
        int j = 0;
        while(i>=0 && arr[i] >= 0){
            if(mpp[double(arr[i])] != 0){
                return true;
            }
            mpp[double(arr[i])/2]++;
            i--;
        }

        while(j <= i){
            if(mpp[double(arr[j])] != 0){
                return true;
            }
            mpp[double(arr[j])/2]++;
            j++;
        }

        return false;
    }
};