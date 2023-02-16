/****************************************************************************************************************************************************
 *  File Name                   : SubTreeOfAnother.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/SubTreeOfAnother.cpp
 *  Created on                  : Feb 15, 2023 :: 7:27:53 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/subtree-of-another-tree
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;


class Solution {
private:
    bool isSameTree(TreeNode *firstRoot, TreeNode *secondRoot) {
        if (firstRoot == nullptr && secondRoot == nullptr) {
            return true;
        }
        if (firstRoot == nullptr || secondRoot == nullptr) {
            return false;
        }
        if (firstRoot->val != secondRoot->val) {
            return false;
        }
        return isSameTree(firstRoot->left, secondRoot->left) && isSameTree(firstRoot->right, secondRoot->right);
    }
public:
    bool isSubtree(TreeNode *root, TreeNode *subRoot) {
        if (root == nullptr && subRoot == nullptr) {
            return true;
        }
        if (subRoot == nullptr) {
            return true;
        }
        if (root == nullptr) {
            return false;
        }
        if (isSameTree(root, subRoot)) {
            return true;
        }
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
