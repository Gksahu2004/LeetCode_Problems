class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<int> st;
        for(int i = 0; i<jewels.size(); i++){
            st.insert(jewels[i]);
        }
        int count = 0;
        for(auto it: stones){
            if(st.find(it) != st.end()){
                count ++;
            }
        }

        return count;
    }
};