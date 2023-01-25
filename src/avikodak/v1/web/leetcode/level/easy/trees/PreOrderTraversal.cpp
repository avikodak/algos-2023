/****************************************************************************************************************************************************
 *  File Name                   : PreOrderTraversal.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/PreOrderTraversal.cpp
 *  Created on                  : Jan 24, 2023 :: 7:54:57 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/binary-tree-preorder-traversal/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
private:
    void preOrderTraversalUtil(TreeNode *root, vector<int> &auxSpace) {
        if (root == nullptr) {
            return;
        }
        auxSpace.push_back(root->val);
        preOrderTraversalUtil(root->left, auxSpace);
        preOrderTraversalUtil(root->right, auxSpace);
    }
public:
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> result;
        preOrderTraversalUtil(root, result);
        return result;
    }
};
