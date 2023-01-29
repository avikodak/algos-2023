/****************************************************************************************************************************************************
 *  File Name                   : IsomorphicStrings.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/IsomorphicStrings.cpp
 *  Created on                  : Jan 28, 2023 :: 8:05:17 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/isomorphic-strings/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    bool isIsomorphic(string firstInput, string secondInput) {
        if (firstInput.size() != secondInput.size()) {
            return false;
        }
        map<char, char> firstToSecondCharMappings;
        map<char, char> secondToFirstCharMappings;
        for (int counter = 0; counter < firstInput.size(); counter++) {
            auto itToFirstCharMappings = firstToSecondCharMappings.find(firstInput[counter]);
            auto itToSecondCharMappings = secondToFirstCharMappings.find(secondInput[counter]);
            if (itToFirstCharMappings == firstToSecondCharMappings.end()
                    && itToSecondCharMappings == secondToFirstCharMappings.end()) {
                firstToSecondCharMappings[firstInput[counter]] = secondInput[counter];
                secondToFirstCharMappings[secondInput[counter]] = firstInput[counter];
            } else if (itToFirstCharMappings == firstToSecondCharMappings.end()
                    && itToSecondCharMappings != secondToFirstCharMappings.end()) {
                return false;
            } else if (itToFirstCharMappings != firstToSecondCharMappings.end()
                    && itToSecondCharMappings == secondToFirstCharMappings.end()) {
                return false;
            } else if (itToFirstCharMappings->second != secondInput[counter]
                    || itToSecondCharMappings->second != firstInput[counter]) {
                return false;
            }
        }

        return true;
    }
};
