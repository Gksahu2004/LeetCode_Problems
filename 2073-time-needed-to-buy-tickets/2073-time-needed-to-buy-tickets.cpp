class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int size = tickets.size();
        int time = 0;
        int i = 0;
        while(1){
            if(tickets[k] == 0) break;
            if(tickets[i] != 0){
                tickets[i]--;
                time++;
            }

            i = (i+1)%size;
        }

        return time;
    }
};