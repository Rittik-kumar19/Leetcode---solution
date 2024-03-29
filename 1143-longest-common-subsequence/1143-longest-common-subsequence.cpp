class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
       int x=s1.size();
        int y=s2.size();
        int dp[x+1][y+1];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<=x;i++){
            for(int j=0;j<=y;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
            }
        }
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        int i=x;
        int j=y;
        string s="";
        
        while(i>0 && j>0){
            if(s1[i-1]==s2[j-1]){
                s.push_back(s1[i-1]);
                i--;j--;
            }
            else{
                if(dp[i-1][j]>dp[i][j-1]){
                    i--;
                }
                else{
                    j--;
                }
            }
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
        return dp[x][y];
    }
};