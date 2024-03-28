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
            if(mp[nums[j]]==k+1){
                cnt++;
            }
            if(cnt >0){
                mp[nums[i]]--;
                if(mp[nums[i]]==k){
                    cnt--;
                }
                i++;
            }
            if(cnt == 0){
                len = max(len, j-i+1);
            }
            j++;
        }
        return len;
    }
};