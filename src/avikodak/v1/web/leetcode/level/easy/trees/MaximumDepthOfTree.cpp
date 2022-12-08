/****************************************************************************************************************************************************
 *  File Name                   : MaximumDepthOfTree.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/MaximumDepthOfTree.cpp
 *  Created on                  : Dec 7, 2022 :: 9:38:13 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/maximum-depth-of-binary-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int maxDepth(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        }
        return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
    }
};
