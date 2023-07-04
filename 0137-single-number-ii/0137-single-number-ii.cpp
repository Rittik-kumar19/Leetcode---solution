class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>ump;
        for(auto n:nums){
            ump[n]++;
        }
        int ans = -1;
        for(auto mp:ump){
            if(mp.second==1){
                ans = mp.first;
                break;
            }
        }
        return ans;
    }
};