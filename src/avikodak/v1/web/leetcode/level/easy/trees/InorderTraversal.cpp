/****************************************************************************************************************************************************
 *  File Name                   : InorderTraversal.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/InorderTraversal.cpp
 *  Created on                  : Dec 6, 2022 :: 11:04:22 PM
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
