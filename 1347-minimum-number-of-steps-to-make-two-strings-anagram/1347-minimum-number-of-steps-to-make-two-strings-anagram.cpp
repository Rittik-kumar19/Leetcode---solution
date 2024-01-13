class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>v(26,0);
        for(int i=0;i<s.size();i++){
            v[s[i]-'a']++;
            v[t[i]-'a']--;
        }
        int st = 0;
        for(int i=0;i<v.size();i++){
            if(v[i]>0){
                st = st+v[i];
            }
        }
        return st;
    }
};