// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         // Approach - 1. - map 
//         // Approach - 2 -  using sorting & iteration
//         // Approach - 3 - using negative marking
//         vector<int> ans;
//         nums[nums[0] - 1] *=-1;
//         for(int i=1;i<nums.size();i++){
//             int index = abs(nums[i]);
//             if(nums[index-1]<0){
//                 ans.push_back(abs(nums[index-1]));
//             }else{
//                 nums[index-1] *=-1;
//             }
//         }
//         sort(ans.begin(), ans.end());
//         return ans;
//     }
// };


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>res;
        nums[nums[0]-1] *=-1;
        for (int i = 1; i < nums.size(); i ++){
            int index = abs(nums[i]);
            if (nums[index-1] < 0) res.push_back(abs(nums[i]));
            else nums[index-1]*=-1;
        }
        return res;
    }
};