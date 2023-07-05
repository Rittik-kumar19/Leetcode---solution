class Solution {
public:
    int longestSubarray(vector<int>& arr) {
         int maxLength = 0;
    int currentLength = 0;
    int zeroCount = 0;
    int left = 0;

    for (int right = 0; right < arr.size(); right++) {
        if (arr[right] == 0) {
            zeroCount++;
        }

        while (zeroCount > 1) {
            if (arr[left] == 0) {
                zeroCount--;
            }
            left++;
        }

        currentLength = right - left + 1;
        maxLength = std::max(maxLength, currentLength);
    }

    return maxLength-1;
    }
};