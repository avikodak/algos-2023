/****************************************************************************************************************************************************
 *  File Name                   : InvertTree.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/InvertTree.cpp
 *  Created on                  : Jan 27, 2023 :: 7:13:21 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/invert-binary-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    TreeNode* invertTree(TreeNode *root) {
        if (root == nullptr) {
            return nullptr;
        }
        TreeNode *left = invertTree(root->left);
        TreeNode *right = invertTree(root->right);
        TreeNode *temp;
        temp = root->left;
        root->left = right;
        root->right = temp;
        return root;
    }
};

