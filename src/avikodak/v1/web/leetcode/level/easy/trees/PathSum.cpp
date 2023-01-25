/****************************************************************************************************************************************************
 *  File Name                   : PathSum.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/PathSum.cpp
 *  Created on                  : Jan 23, 2023 :: 10:10:47 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/path-sum/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool hasPathSum(TreeNode *root, int targetSum) {
        if (root == nullptr) {
            return false;
        }
        if (root->left == nullptr && root->right == nullptr) {
            return targetSum == 0;
        }
        return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
    }
};
