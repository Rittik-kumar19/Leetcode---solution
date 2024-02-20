class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x=0;
        for(int i=0;i<nums.size();i++){
            x^=nums[i];
        }
        int y=0;
        for(int i=0;i<=nums.size();i++){
            y^=i;
        }
        int res=x^y;
        return res;
    }
};