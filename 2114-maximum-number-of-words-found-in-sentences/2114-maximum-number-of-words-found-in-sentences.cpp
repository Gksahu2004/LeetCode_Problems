#include<bits/stdc++.h>
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {

        // int size = sentences.size();
        // int maxwords = 0;

        // for(int i = 0; i<size; i++){
        //     vector<string> vec;
        //     stringstream ss(sentences[i]);
        //     string word;
        //     while(getline(ss, word, ' ')){
        //         vec.push_back(word);
        //     }
        //     int vecsize = vec.size();
        //     if(vecsize > maxwords){
        //         maxwords = vecsize;
        //     }
        // }

        // return maxwords;



        int count, maxcount = 0;
        for(int i = 0; i<sentences.size(); i++){
            count = 0;
            for(auto it : sentences[i]){
                if(it == ' '){
                    count++;
                }
            }
            maxcount = max(maxcount, count+1);
        }

        return maxcount;
    }
};