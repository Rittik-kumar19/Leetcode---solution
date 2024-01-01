/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let map = {}
    if(nums.length>=2){
        for (let i = 0;i<nums.length;i++){
            let y = target - nums[i];
            if(map.hasOwnProperty(y)){
                return [i,map[y]];
            }else{
                map[nums[i]]=i
            }
        }
    }
    return [];
};