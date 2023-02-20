/****************************************************************************************************************************************************
 *  File Name                   : ValidateBinarySearchTree.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/medium/bst/ValidateBinarySearchTree.cpp
 *  Created on                  : Feb 19, 2023 :: 7:53:01 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/validate-binary-search-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
private:
    bool isValidBSTUtil(TreeNode *root, long int minValue = LONG_MIN, long int maxValue = LONG_MAX) {
        if (root == nullptr) {
            return true;
        }
        if ((long int) root->val <= minValue || (long int) root->val >= maxValue) {
            return false;
        }
        return isValidBSTUtil(root->left, minValue, (long int) root->val)
                && isValidBSTUtil(root->right, (long int) root->val, maxValue);
    }
public:
    bool isValidBST(TreeNode *root) {
        if (root == nullptr) {
            return true;
        }
        return isValidBSTUtil(root);
    }
};
