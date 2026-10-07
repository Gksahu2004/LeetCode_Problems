class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> st;
        vector<int> vec;

        // int size = friends.size();
        for(int i = 0; i<friends.size(); i++){
            st.insert(friends[i]);
        }

        for(int i = 0; i<order.size(); i++){
            // if(size == 0) break;
            if(st.find(order[i]) != st.end()){
                vec.push_back(order[i]);
                // size--;
            }
        }

        return vec;
    }
};