class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
       return next((i,j) for i, x in enumerate(nums) for j,y in enumerate(nums[i+1:],i+1) if x+y == target)
                    
        