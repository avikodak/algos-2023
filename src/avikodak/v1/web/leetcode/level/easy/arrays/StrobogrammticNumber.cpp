/****************************************************************************************************************************************************
 *  File Name                   : StrobogrammticNumber.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/StrobogrammticNumber.cpp
 *  Created on                  : Feb 4, 2023 :: 3:03:58 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/strobogrammatic-number/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    bool isStrobogrammatic(string userInput) {
        map<char, char> auxSpace;
        auxSpace['0'] = '0';
        auxSpace['1'] = '1';
        auxSpace['6'] = '9';
        auxSpace['8'] = '8';
        auxSpace['9'] = '6';
        int frontCrawler = 0;
        int rearCrawler = userInput.size() - 1;
        while (frontCrawler <= rearCrawler) {
            if (auxSpace.find(userInput[frontCrawler]) == auxSpace.end()
                    || auxSpace.find(userInput[rearCrawler]) == auxSpace.end()) {
                return false;
            }
            if (auxSpace[userInput[frontCrawler]] != userInput[rearCrawler]) {
                return false;
            }
            if (userInput[frontCrawler] != auxSpace[userInput[rearCrawler]]) {
                return false;
            }
            frontCrawler++;
            rearCrawler--;
        }
        return true;
    }
};
