/****************************************************************************************************************************************************
 *  File Name                   : SameTree.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/SameTree.cpp
 *  Created on                  : Dec 7, 2022 :: 9:22:44 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/same-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
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
};
