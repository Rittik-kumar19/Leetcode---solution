class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
       sort(s.begin(),s.end());
       sort(g.begin(),g.end());
       vector<int>mp(s.size(),0);
       for(int i=0;i<g.size();i++){
           for(int j=0;j<s.size();j++){
               if(!mp[j] && (s[j]>=g[i])){
                   mp[j] = 1;
                   break;
               }
           }
       }
       for(int i=0;i<mp.size();i++){
           cout<<mp[i]<<" ";
       }
        cout<<endl;
       int ans = 0;
       for(int i=0;i<mp.size();i++){
           if(mp[i]){
               ans++;
           }
       }
       return ans;
    }
};