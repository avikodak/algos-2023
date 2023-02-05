/****************************************************************************************************************************************************
 *  File Name                   : SearchInSortedArray.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/bs/SearchInSortedArray.cpp
 *  Created on                  : Feb 4, 2023 :: 8:31:53 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/search-in-rotated-sorted-array/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
private:
    int search(vector<int> &userInput, int target, int start, int end) {
        if (start > end) {
            return -1;
        }
        int mid = start + (end - start) / 2;
        if (userInput[mid] == target) {
            return mid;
        } else if (userInput[start] <= userInput[mid]) {
            if (target >= userInput[start] && target < userInput[mid]) {
                return search(userInput, target, start, mid - 1);
            } else {
                return search(userInput, target, mid + 1, end);
            }
        } else {
            if (target > userInput[mid] && target <= userInput[end]) {
                return search(userInput, target, mid + 1, end);
            } else {
                return search(userInput, target, start, mid - 1);
            }
        }
    }
public:
    int search(vector<int> &nums, int target) {
        return search(nums, target, 0, nums.size() - 1);
    }
};

