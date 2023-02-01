/****************************************************************************************************************************************************
 *  File Name                   : PascalsTriangleII.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/math/PascalsTriangleII.cpp
 *  Created on                  : Jan 31, 2023 :: 8:39:24 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/pascals-triangle-ii/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> prev;
        vector<int> current;
        for (int rowCounter = 0; rowCounter <= rowIndex; rowCounter++) {
            current.clear();
            if (rowCounter == 0) {
                current.push_back(1);
            } else if (rowCounter == 1) {
                current.push_back(1);
                current.push_back(1);
            } else {
                current.push_back(1);
                for (int counter = 0; counter < prev.size() - 1; counter++) {
                    current.push_back(prev[counter] + prev[counter + 1]);
                }
                current.push_back(1);
            }
            prev = current;
        }
        return prev;
    }
};
