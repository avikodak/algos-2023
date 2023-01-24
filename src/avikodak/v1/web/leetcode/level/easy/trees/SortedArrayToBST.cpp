/****************************************************************************************************************************************************
 *  File Name                   : SortedArrayToBST.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/SortedArrayToBST.cpp
 *  Created on                  : Jan 14, 2023 :: 6:19:35 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    TreeNode* sortedArrayToBST(std::vector<int> &nums, int startIndex, int endIndex) {
        if (startIndex > endIndex) {
            return nullptr;
        }
        int middleIndex = (endIndex + startIndex) / 2;
        TreeNode *root = new TreeNode(nums[middleIndex]);
        root->left = sortedArrayToBST(nums, startIndex, middleIndex - 1);
        root->right = sortedArrayToBST(nums, middleIndex + 1, endIndex);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(std::vector<int> &nums) {
        return sortedArrayToBST(nums, 0, nums.size() - 1);
    }
};
