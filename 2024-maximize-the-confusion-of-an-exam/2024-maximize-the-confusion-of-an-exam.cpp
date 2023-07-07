class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int maxFreq = 0;
        int i = 0;
        unordered_map<char,int>charCount;
        
        for(int j=0;j<answerKey.size();j++){
            char curchar = answerKey[j];
            charCount[curchar]++;
            maxFreq = max(maxFreq,charCount[curchar]);
            if(j-i+1>maxFreq+k){
                charCount[answerKey[i]]--;
                i++;
            }
        }
        return answerKey.size()-i;
    }
};