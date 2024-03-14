class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

           map<int,int>mp;
           mp[0]=1;
           int sum=0;
           int ans=0;
           for(auto ele:nums){
            sum+=ele;
            ans+=mp[sum-goal];
            mp[sum]++;
           }
           return ans;
    }
};