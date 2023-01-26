/****************************************************************************************************************************************************
 *  File Name                   : ConvertSortedToBST.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/ConvertSortedToBST.cpp
 *  Created on                  : Jan 24, 2023 :: 10:30:16 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
private:
    TreeNode* sortedArrayToBSTUtil(vector<int> &userInput, int startIndex, int endIndex) {
        if (startIndex > endIndex) {
            return nullptr;
        }
        int midIndex = startIndex + (endIndex - startIndex) / 2;
        TreeNode *root = new TreeNode(userInput[midIndex]);
        root->left = sortedArrayToBSTUtil(userInput, startIndex, midIndex - 1);
        root->left = sortedArrayToBSTUtil(userInput, midIndex + 1, endIndex);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int> &nums) {
        return sortedArrayToBSTUtil(nums, 0, nums.size() - 1);
    }
};
