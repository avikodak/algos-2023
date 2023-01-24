/****************************************************************************************************************************************************
 *  File Name                   : BinaryTreeInorderTraversal.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/BinaryTreeInorderTraversal.cpp
 *  Created on                  : Jan 23, 2023 :: 9:29:25 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/binary-tree-inorder-traversal/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    void inorderTraversalUtil(TreeNode *root, std::vector<int> &result) {
        if (root == nullptr) {
            return;
        }
        inorderTraversalUtil(root->left, result);
        result.push_back(root->val);
        inorderTraversalUtil(root->right, result);
    }

public:
    std::vector<int> inorderTraversal(TreeNode *root) {
        std::vector<int> result;
        inorderTraversalUtil(root, result);
        return result;
    }
};

