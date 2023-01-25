/****************************************************************************************************************************************************
 *  File Name                   : MaxDepth.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/MaxDepth.cpp
 *  Created on                  : Jan 24, 2023 :: 7:53:42 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/maximum-depth-of-binary-tree
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    int maxDepth(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        }
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};

