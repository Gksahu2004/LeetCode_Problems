class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_set<int> st;
        vector<int> vec;
        int count = 0;
        int i = 0, j = 0;
        while(i < A.size() && j < B.size()){
            if(A[i] == B[j]) count++;
            else{
                if(st.find(A[i]) != st.end()) count++;
                else st.insert(A[i]);

                if(st.find(B[j]) != st.end()) count++;
                else st.insert(B[j]);
            }

            vec.push_back(count);

            i++;
            j++;
        }

        return vec;
    }
};