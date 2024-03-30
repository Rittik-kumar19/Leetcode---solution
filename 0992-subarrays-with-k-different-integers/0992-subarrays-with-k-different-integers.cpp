class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int n = nums.size(), i = 0, ans = 0, cnt = 0, m = 0;
        unordered_map<int, int> f;

        for(int j = 0; j < n; ++j) {
            // add current element to window
            ++f[nums[j]];
            if(f[nums[j]] == 1) ++cnt;

            // reduce current window so that one element out of (k + 1) unique elements is removed
            while(cnt > k) {
                --f[nums[m++]];
                i = m;
                --cnt;
            }

            while(f[nums[m]] > 1) --f[nums[m++]];

            if(cnt == k) ans += (m - i + 1);
        }

        return ans;
    }
};