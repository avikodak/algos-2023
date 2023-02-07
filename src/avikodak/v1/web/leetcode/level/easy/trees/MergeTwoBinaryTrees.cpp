/****************************************************************************************************************************************************
 *  File Name                   : MergeTwoBinaryTrees.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/MergeTwoBinaryTrees.cpp
 *  Created on                  : Feb 6, 2023 :: 9:10:37 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/merge-two-binary-trees/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    TreeNode* mergeTrees(TreeNode *firstRoot, TreeNode *secondRoot) {
        if (firstRoot == nullptr && secondRoot == nullptr) {
            return nullptr;
        }
        if (firstRoot == nullptr || secondRoot == nullptr) {
            return firstRoot != nullptr ? firstRoot : secondRoot;
        }
        TreeNode *mergedRoot = new TreeNode(firstRoot->val + secondRoot->val);
        mergedRoot->left = mergeTrees(firstRoot->left, secondRoot->left);
        mergedRoot->right = mergeTrees(firstRoot->right, secondRoot->right);
        return mergedRoot;
    }
};
