class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        long long cnt = 0;
        int i = n-1;
        char ch = s[i];
        while(ch==' '){
            if(i>0){
                i--;
            }
            ch= s[i];
        }
        char ch1 = s[i];
        while(ch1!=' '){
            cnt++;
            if(i==0){
                break;
            }
            i--;
            ch1 = s[i];
        }
        return cnt;
    }
};