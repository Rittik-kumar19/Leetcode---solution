class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long start = 0, res = 0, mini = -1, maxi = -1, right = 0, wind;
        while (right < nums.size()) {
            if (nums[right] > maxK || nums[right] < minK) {
                start = right + 1;
                mini = right;
                maxi = right;
            }
            if (nums[right] == minK) mini = right;
            if (nums[right] == maxK) maxi = right;
            wind = min(mini, maxi) - start + 1;
            res += max(0LL, wind); 
            right++;
        }
        return res;
    }
};