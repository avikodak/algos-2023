/****************************************************************************************************************************************************
 *  File Name                   : PascalsTriangle.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/math/PascalsTriangle.cpp
 *  Created on                  : Jan 31, 2023 :: 8:31:52 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/pascals-triangle/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for (int rowCounter = 0; rowCounter < numRows; rowCounter++) {
            vector<int> subResult;
            if (rowCounter == 0) {
                subResult.push_back(1);
            } else if (rowCounter == 1) {
                subResult.push_back(1);
                subResult.push_back(1);
            } else {
                subResult.push_back(1);
                for (int counter = 0; counter < result[rowCounter - 1].size() - 1; counter++) {
                    subResult.push_back(result[rowCounter - 1][counter] + result[rowCounter - 1][counter + 1]);
                }
                subResult.push_back(1);
            }
            result.push_back(subResult);
        }
        return result;
    }
};

