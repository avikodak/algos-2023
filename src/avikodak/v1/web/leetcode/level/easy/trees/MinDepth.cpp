/****************************************************************************************************************************************************
 *  File Name                   : MinDepth.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/MinDepth.cpp
 *  Created on                  : Jan 25, 2023 :: 9:41:58 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/minimum-depth-of-binary-tree
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
private:
    int minDepthUtil(TreeNode *root) {
        if (root == nullptr) {
            return INT_MAX;
        }
        if (root->left == nullptr && root->right == nullptr) {
            return 1;
        }
        return 1 + min(minDepthUtil(root->left), minDepthUtil(root->right));
    }
public:
    int minDepth(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        }
        return minDepthUtil(root);
    }
};
