/****************************************************************************************************************************************************
 *  File Name                   : PostorderTraversal.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/PostorderTraversal.cpp
 *  Created on                  : Dec 8, 2022 :: 11:19:16 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/binary-tree-postorder-traversal/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
private:
    void postorderTraversalUtil(TreeNode *root, std::vector<int> &result) {
        if (root == nullptr) {
            return;
        }
        postorderTraversalUtil(root->left, result);
        postorderTraversalUtil(root->right, result);
        result.push_back(root->val);
    }
public:
    std::vector<int> postorderTraversal(TreeNode *root) {
        std::vector<int> result;
        postorderTraversalUtil(root, result);
        return result;
    }
};
