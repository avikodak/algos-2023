/****************************************************************************************************************************************************
 *  File Name                   : SameTree.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/SameTree.cpp
 *  Created on                  : Jan 24, 2023 :: 6:29:25 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/same-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    bool isSameTree(TreeNode *firstTree, TreeNode *secondTree) {
        if (firstTree == nullptr && secondTree == nullptr) {
            return true;
        }
        if (firstTree == nullptr || secondTree == nullptr) {
            return false;
        }
        if (firstTree->val != secondTree->val) {
            return false;
        }
        return isSameTree(firstTree->left, secondTree->left) && isSameTree(firstTree->right, secondTree->right);
    }
};

