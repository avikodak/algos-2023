/****************************************************************************************************************************************************
 *  File Name                   : MovingAverage.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/queue/MovingAverage.cpp
 *  Created on                  : Feb 6, 2023 :: 7:44:20 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/moving-average-from-data-stream/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class MovingAverage {
private:
    queue<int> userInput;
    int targetSize;
    int currentLength;
    int sum;
public:
    MovingAverage(int size) {
        targetSize = size;
        currentLength = 0;
        sum = 0;
    }

    double next(int val) {
        if (!userInput.empty() && userInput.size() >= targetSize) {
            sum -= userInput.front();
            userInput.pop();
            currentLength -= 1;
        }
        sum += val;
        userInput.push(val);
        currentLength += 1;
        return (double) (sum) / currentLength;
    }
};
