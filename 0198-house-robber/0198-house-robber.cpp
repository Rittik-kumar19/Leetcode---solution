// vector<int>dp(1000,-1);
class Solution {
    public:
       int dp[1000];
       int solve(vector<int>&v, int n){
        if(n==1){
            dp[n]=v[0];
            return dp[n];
        }
        if(n==2){
            dp[n]=max(v[0],v[1]);
            return dp[n];
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n] = max(solve(v,n-2)+v[n-1],solve(v,n-1));
        return dp[n];
    }
public:
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(nums,nums.size());
    }
};