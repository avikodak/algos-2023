/****************************************************************************************************************************************************
 *  File Name                   : FindAnagramMapping.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/arrays/FindAnagramMapping.cpp
 *  Created on                  : Feb 9, 2023 :: 9:55:50 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/find-anagram-mappings/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    vector<int> anagramMappings(vector<int> &nums1, vector<int> &nums2) {
        map<int, int> valueIndex;
        for (int counter = 0; counter < nums2.size(); counter++) {
            valueIndex[nums2[counter]] = counter;
        }
        vector<int> result;
        for (int counter = 0; counter < nums1.size(); counter++) {
            result.push_back(valueIndex[nums1[counter]]);
        }
        return result;
    }
};
