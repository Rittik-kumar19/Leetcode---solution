class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        map<char,char>mp;
        map<char,char>mpp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]=t[i];
        }
        for(int i=0;i<t.size();i++){
            mpp[t[i]]=s[i];
        }
        cout<<mp.size()<<endl;
        cout<<mpp.size()<<endl;
        string ans = "";
        for(int i=0;i<s.size();i++){
            ans += mp[s[i]];
        }
        string anss = "";
        for(int i=0;i<t.size();i++){
            anss+=mpp[t[i]];
        }
        cout<<ans<<"  "<<anss<<endl;
        if(ans==t and anss==s){
            return true;
        }
        return false;
    }
};