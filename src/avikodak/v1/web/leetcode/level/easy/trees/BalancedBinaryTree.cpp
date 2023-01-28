/****************************************************************************************************************************************************
 *  File Name                   : BalancedBinaryTree.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/BalancedBinaryTree.cpp
 *  Created on                  : Jan 27, 2023 :: 6:24:43 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/balanced-binary-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
private:
    int isBalancedUtil(TreeNode *root, bool &isBalanced) {
        if (!isBalanced) {
            return 0;
        }
        if (root == nullptr) {
            return 0;
        }
        int lh = isBalancedUtil(root->left, isBalanced);
        int rh = isBalancedUtil(root->right, isBalanced);
        if (abs(lh - rh) > 1) {
            isBalanced = false;
        }
        return 1 + max(lh, rh);
    }

public:
    bool isBalanced(TreeNode *root) {
        bool isBalanced = true;
        isBalancedUtil(root, isBalanced);
        return isBalanced;
    }
};
