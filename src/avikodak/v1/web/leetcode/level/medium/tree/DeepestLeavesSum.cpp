/****************************************************************************************************************************************************
 *  File Name                   : DeepestLeavesSum.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/medium/tree/DeepestLeavesSum.cpp
 *  Created on                  : Feb 5, 2023 :: 8:19:41 AM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/deepest-leaves-sum/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
private:
    int depth(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        }
        return 1 + max(depth(root->left), depth(root->right));
    }
    int getDeepestLeavesSum(TreeNode *root, int height) {
        if (root == nullptr) {
            return 0;
        }
        if (height == 1 && root->left == nullptr && root->right == nullptr) {
            return root->val;
        }
        return getDeepestLeavesSum(root->left, height - 1) + getDeepestLeavesSum(root->right, height - 1);
    }

public:
    int deepestLeavesSum(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        }
        int height = depth(root);
        return getDeepestLeavesSum(root, height);
    }
};
