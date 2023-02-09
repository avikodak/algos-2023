/****************************************************************************************************************************************************
 *  File Name                   : MergeIntervals.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/medium/MergeIntervals.cpp
 *  Created on                  : Feb 8, 2023 :: 8:18:37 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/merge-intervals/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals) {
        sort(intervals.begin(), intervals.end());
        int outerCounter = 0;
        vector<vector<int>> result;
        while (outerCounter < intervals.size()) {
            if (result.empty()) {
                result.push_back(intervals[outerCounter]);
            } else {
                if (result.back()[1] >= intervals[outerCounter][0]) {
                    result.back()[1] = std::max(result.back()[1], intervals[outerCounter][1]);
                } else {
                    result.push_back(intervals[outerCounter]);
                }
            }
            outerCounter++;
        }
        return result;
    }
};
