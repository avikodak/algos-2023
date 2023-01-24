/****************************************************************************************************************************************************
 *  File Name                   : MinDepthTree.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/MinDepthTree.cpp
 *  Created on                  : Jan 15, 2023 :: 8:02:24 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/minimum-depth-of-binary-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    int minDepth(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        }
        return 1 + std::min(minDepth(root->left), minDepth(root->right));
    }
};
