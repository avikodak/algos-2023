/****************************************************************************************************************************************************
 *  File Name                   : PreorderTraversal.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/PreorderTraversal.cpp
 *  Created on                  : Dec 8, 2022 :: 11:14:57 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/binary-tree-preorder-traversal
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    void preorderTraversalUtil(TreeNode *root, std::vector<int> &result) {
        if (root == nullptr) {
            return;
        }
        result.push_back(root->val);
        preorderTraversalUtil(root->left, result);
        preorderTraversalUtil(root->right, result);
    }
public:
    std::vector<int> preorderTraversal(TreeNode *root) {
        std::vector<int> result;
        preorderTraversalUtil(root, result);
        return result;
    }
};
