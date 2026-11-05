class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int totaltime = 0;
        int prevfloor = 0;
        int size = requests.size();
        for(int i = 0; i<size; i++){
            totaltime += abs(requests[i] - prevfloor);
            prevfloor = requests[i];
        }

        return totaltime;
    }
};