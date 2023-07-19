class Solution {
public:
    // int eraseOverlapIntervals(vector<vector<int>>& nn) {
    //     sort(nn.begin(),nn.end());
    //     int n=nn.size();
    //     int dp[n+1];
    //     memset(dp,0,sizeof(dp));
    //     dp[0]=1;
    //     for(int i=1;i<n;i++){
    //         int mx=0;
    //         for(int j=0;j<i;j++){
    //             if(nn[j][1]<nn[i][1]){
    //                 if(dp[j]>mx){
    //                     mx=dp[j];
    //                 }
    //             }
    //         }
    //         dp[i]=mx+1;
    //     }
    //     return *max_element(dp,dp+n);
    // }
    static bool cmp(vector<int> &a, vector<int> &b){
        if(a[1]!=b[1]) return a[1]<b[1];
        return a[0]<b[0];
        }
    int eraseOverlapIntervals(vector<vector<int>>& in) {
        sort(in.begin(),in.end(),cmp);
        int n =in.size();
        int x=0;
        int ans=0;
        for(int i=0; i<n-1; i++){
            if(in[x][1]>in[i+1][0]){
                ans++;
            }
            else{
                x=i+1;
            }
        }
        return ans;
    }
};