class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        // int flag = 0;
        // for(int i = 1; i<arr.size(); i++){
        //     if(flag == 0){
        //         if(arr[i] > arr[i-1]) continue;
        //         else if (arr[i] < arr[i-1]) flag = 1;
        //         else return false;
        //     }
        //     else{
        //         if(arr[i] < arr[i-1]) continue;
        //         else return false;
        //     }
        // }
        // if (flag == 0 || arr[0] > arr[1]) return false;
        // return true;


        int size = arr.size();
        int i = 0;
        int j = size-1;
        if(size < 3){
            return false;
        }
        else{
            while(i < size-2 && arr[i] < arr[i+1]){
                i++;
            }
            while(j > 1 && j >= i-1 && arr[j] < arr[j-1]){
                j--;
            } 
            if(i != j) return false;
        }

        return true;
    }
};