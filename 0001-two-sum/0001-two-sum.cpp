class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v(2);
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(mp.count(target-nums[i])){
                v[0]=i;
                v[1]=mp[target-nums[i]];
                return v;
            }
            mp[nums[i]]=i;
        }
        return v;
    }
};