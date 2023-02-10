/****************************************************************************************************************************************************
 *  File Name                   : LoggerRateLimiter.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/others/LoggerRateLimiter.cpp
 *  Created on                  : Feb 9, 2023 :: 7:48:54 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Logger {
private:
    map<string, int> lastSeenTracker;
public:
    Logger() {

    }

    bool shouldPrintMessage(int timestamp, string message) {
        auto itToLastSeenTracker = lastSeenTracker.find(message);
        if (itToLastSeenTracker == lastSeenTracker.end() || abs(timestamp - itToLastSeenTracker->second) >= 10) {
            lastSeenTracker[message] = timestamp;
            return true;
        } else {
            return false;
        }
    }
};
