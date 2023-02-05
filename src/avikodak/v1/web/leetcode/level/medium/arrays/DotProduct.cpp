/****************************************************************************************************************************************************
 *  File Name                   : DotProduct.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/medium/arrays/DotProduct.cpp
 *  Created on                  : Feb 4, 2023 :: 11:26:24 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/dot-product-of-two-sparse-vectors/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class SparseVector {
public:
    map<int, int> indexToValueMap;

    SparseVector(vector<int> &nums) {
        for (int counter = 0; counter < nums.size(); counter++) {
            if (nums[counter] != 0) {
                indexToValueMap[counter] = nums[counter];
            }
        }
    }

    int dotProduct(SparseVector &secondInput) {
        int result = 0;
        map<int, int> secondIndexToValueMap = secondInput.indexToValueMap;
        for (auto itToMap = secondIndexToValueMap.begin(); itToMap != secondIndexToValueMap.end(); itToMap++) {
            if (indexToValueMap.find(itToMap->first) != indexToValueMap.end()) {
                result += (itToMap->second) * indexToValueMap[itToMap->first];
            }
        }
        return result;
    }
};
