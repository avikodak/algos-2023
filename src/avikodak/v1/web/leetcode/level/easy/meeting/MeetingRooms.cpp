/****************************************************************************************************************************************************
 *  File Name                   : MeetingRooms.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/meeting/MeetingRooms.cpp
 *  Created on                  : Jan 27, 2023 :: 8:30:51 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/meeting-rooms/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    bool canAttendMeetings(vector<vector<int>> &intervals) {
        if(intervals.size() == 0) {
            return true;
        }
        sort(intervals.begin(), intervals.end());
        for (int counter = 0; counter < intervals.size() - 1; counter++) {
            if (intervals[counter][1] > intervals[counter + 1][0]) {
                return false;
            }
        }
        return true;
    }
};
