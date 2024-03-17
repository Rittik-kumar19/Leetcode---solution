#include <algorithm>

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        if (intervals.empty()) {
            return {newInterval};
        }
        int startRow = -1;
        int endRow = -1;
        int firstStartCheck = 0;
        int intervalsLength = intervals.size();
        for (int i = 0; i < intervalsLength; i++) {
            if (newInterval[0] <= intervals[i][1] && firstStartCheck == 0) {
                startRow = i;
                firstStartCheck = 1;
            }
            if (newInterval[1] >= intervals[i][0]) {
                endRow = i;
            }
        }
        if (startRow == -1) {
            intervals.push_back(newInterval);
            return intervals;
        }
        if (endRow == -1) {
            intervals.insert(intervals.begin(), newInterval);
            return intervals;
        }
        int newStart = min(newInterval[0], intervals[startRow][0]);
        int newEnd = max(newInterval[1], intervals[endRow][1]);
        int mergedCount = endRow - startRow + 1;
        vector<vector<int>> newIntervals;
        for (int i = 0; i < startRow; i++) {
            newIntervals.push_back(intervals[i]);
        }
        newIntervals.push_back({newStart, newEnd});
        for (int i = endRow + 1; i < intervalsLength; i++) {
            newIntervals.push_back(intervals[i]);
        }
        return newIntervals;
    }
};