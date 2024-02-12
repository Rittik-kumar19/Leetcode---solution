class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map<int,int>ump;
        // for(auto nm:nums){
        //     ump[nm]++;
        // }
        // int ans = 0;
        // for(auto x:ump){
        //     if(x.second>(nums.size()/2)){
        //         ans = x.first;
        //         break;
        //     }
        // }
        // return ans;
        
        int ele = 0;
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                ele = nums[i];
            }
            if(ele == nums[i]){
                cnt+=1;
            }
            else{
                cnt-=1;
            }
        }
        return ele;
    }
};