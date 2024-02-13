class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto w:words){
            string st = w;
            reverse(st.begin(),st.end());
            if(st==w){
                return w;
            }
        }
        return "";
    }
};