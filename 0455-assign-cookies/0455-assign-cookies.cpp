class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
      /*
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
      */
      //optimized method
      sort(s.begin(),s.end());
      sort(g.begin(),g.end());
      int csz = s.size()-1;
      int nch = g.size()-1;
        int count = 0;
      while(csz>=0 && nch>=0){
          if(s[csz]>=g[nch]){
              csz--;
              nch--;
              count++;
          }
          else{
              nch--;
          }
      }
      return count;
    }
};