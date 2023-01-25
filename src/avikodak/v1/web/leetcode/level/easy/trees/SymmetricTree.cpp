/****************************************************************************************************************************************************
 *  File Name                   : SymmetricTree.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/SymmetricTree.cpp
 *  Created on                  : Jan 24, 2023 :: 6:44:54 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/symmetric-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
private:
    bool isSymmetricUtil(TreeNode *firstNode, TreeNode *secondNode) {
        if (firstNode == nullptr && secondNode == nullptr) {
            return true;
        }
        if (firstNode == nullptr || secondNode == nullptr) {
            return false;
        }
        if (firstNode->val != secondNode->val) {
            return false;
        }
        return isSymmetricUtil(firstNode->left, secondNode->right)
                && isSymmetricUtil(firstNode->right, secondNode->left);
    }
public:
    bool isSymmetric(TreeNode *root) {
        if (root == nullptr) {
            return true;
        }
        return isSymmetricUtil(root->left, root->right);
    }
};
