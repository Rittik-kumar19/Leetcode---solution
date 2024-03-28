class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0,j=0;
        int cnt = 0;
        int len = 0;
        int mxcnt = INT_MIN;
        map<int,int>mp;
        while(j<n){
            
            mp[nums[j]]++;
            // mxcnt = max(mxcnt, mp[nums[j]]);
            while(i<j && mp[nums[j]] > k){
                mp[nums[i]]--;
                i++;
            }
            
            len = max(len, (j-i+1));
            j++;
        }
        return len;
    }
};