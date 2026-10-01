class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxright = -1;
        for(int i = arr.size()-1; i>=0; i--){
            int temp = arr[i];
            arr[i] = maxright;
            maxright = max(maxright, temp);
        }
        return arr;
        
        
        
        // int size = arr.size();
        // int maximum = arr[size-1];
        // vector<int> vec (size);
        // for(int i = size-2; i>=0; i--){
        //     if(arr[i+1] > maximum){
        //         maximum = arr[i+1];
        //     }
        //     vec[i] = maximum;
        // }
        // vec[size-1] = -1;
        // return vec;



        // // BASIC BRUTE FORCE SOLUTION
        // int size = arr.size();
        // for(int i = 0; i<size-1; i++){
        //     int maximum = arr[i+1];
        //     for(int j = i+1; j<size; j++){
        //         maximum = max(maximum, arr[j]);
        //     }
        //     arr[i] = maximum;
        // }
        // arr[size-1] = -1;
        // return arr;
    }
};