class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // approach 1 - [1, 2, 3,4,5] & without sorting
        // approach 2 - [1, 3, 6, 7, 2] => you can use set or freq map of size [N+1]
        // approach 3 - [1, 3, 5, 6,4] -> using negative sign conversion
        
        bool is1present = false;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1){
                is1present = true;
            }
            
            if(nums[i]<=0 || nums[i]>nums.size()){
                nums[i] = 1;
            }
        }
        if(!is1present){
            return 1;
        }
        
        for(int i=0;i<nums.size();i++){
            int num = abs(nums[i]);
            int idx = num - 1;
            
            if(nums[idx]<0) continue;
            
            nums[idx] *= -1;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                return i+1;
            }
        }
        
        return nums.size()+1;
    
    }
};