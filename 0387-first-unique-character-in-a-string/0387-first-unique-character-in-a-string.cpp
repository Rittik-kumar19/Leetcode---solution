class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>mp1;
        map<char,int>mp2;
        int n=s.size();
        for(int i=0;i<n;i++){
            mp1[s[i]]++;
        }
        for(int i=0;i<n;i++){
            mp2[s[i]]=i;
        }
        // for(auto )
        vector<char>v;
        for(auto x:mp1){
            if(x.second==1){
               v.push_back(x.first);
            }
        }
        if(v.size()==0){
            return -1;
        }
        int mn=INT_MAX;
        for(int i=0;i<v.size();i++){
           mn=min(mn,mp2[v[i]]);
        }
        return mn;
    }
};