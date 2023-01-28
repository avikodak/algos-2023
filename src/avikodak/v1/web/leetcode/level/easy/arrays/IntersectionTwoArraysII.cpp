/****************************************************************************************************************************************************
 *  File Name                   : IntersectionTwoArraysII.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/IntersectionTwoArraysII.cpp
 *  Created on                  : Jan 27, 2023 :: 9:37:02 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int> &first, vector<int> &second) {
        vector<int> result;
        std::map<int, int> firstSeenElements;
        for (int counter = 0; counter < first.size(); counter++) {
            if (firstSeenElements.find(first[counter]) == firstSeenElements.end()) {
                firstSeenElements[first[counter]] = 1;
            } else {
                firstSeenElements[first[counter]] += 1;
            }
        }
        for (int counter = 0; counter < second.size(); counter++) {
            if (firstSeenElements.find(second[counter]) != firstSeenElements.end()) {
                result.push_back(second[counter]);
                if (firstSeenElements[second[counter]] == 1) {
                    firstSeenElements.erase(second[counter]);
                } else {
                    firstSeenElements[second[counter]] -= 1;
                }
            }
        }
        return result;
    }
};
