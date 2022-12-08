/****************************************************************************************************************************************************
 *  File Name                   : SymmetricTree.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/SymmetricTree.cpp
 *  Created on                  : Dec 7, 2022 :: 9:57:10 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/symmetric-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    bool isSymmetricUtil(TreeNode *first, TreeNode *second) {
        if (first == nullptr && second == nullptr) {
            return true;
        }
        if (first == nullptr || second == nullptr) {
            return false;
        }
        if (first->val != second->val) {
            return false;
        }
        return isSymmetricUtil(first->right, second->left) && isSymmetricUtil(first->left, second->right);
    }
public:
    bool isSymmetric(TreeNode *root) {
        if (root == nullptr) {
            return true;
        }
        return isSymmetricUtil(root->left, root->right);
    }
};
