/****************************************************************************************************************************************************
 *  File Name                   : IntersectionTwoArrays.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/IntersectionTwoArrays.cpp
 *  Created on                  : Jan 27, 2023 :: 9:26:27 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/intersection-of-two-arrays/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int> &first, vector<int> &second) {
        vector<int> result;
        std::map<int, bool> firstSeenElements;
        std::map<int, bool> secondSeenElements;
        for (int counter = 0; counter < first.size(); counter++) {
            if (firstSeenElements.find(first[counter]) == firstSeenElements.end()) {
                firstSeenElements[first[counter]] = true;
            }
        }
        for (int counter = 0; counter < second.size(); counter++) {
            if (secondSeenElements.find(second[counter]) == secondSeenElements.end()) {
                if (firstSeenElements.find(second[counter]) != firstSeenElements.end()) {
                    result.push_back(second[counter]);
                }
                secondSeenElements[second[counter]] = true;
            }
        }
        return result;
    }
};
