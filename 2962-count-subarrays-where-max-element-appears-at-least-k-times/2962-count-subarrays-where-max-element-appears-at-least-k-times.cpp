class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long maxi=*max_element(nums.begin(),nums.end());long long n=nums.size();
        long long cnt=0,frq=0;
        long long l=0,r=0;
        for(;r<n;r++){
            if(nums[r]==maxi){
                frq++;
            }
            while(frq>=k){
                if(nums[l]==maxi){
                    frq--;
                }
                l++;
            }
            cnt+=r-l+1;
        }
        return n*(n+1)/2 - cnt;
    }
};