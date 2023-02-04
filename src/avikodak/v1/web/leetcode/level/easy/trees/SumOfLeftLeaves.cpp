/****************************************************************************************************************************************************
 *  File Name                   : SumOfLeftLeaves.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/SumOfLeftLeaves.cpp
 *  Created on                  : Feb 3, 2023 :: 7:29:29 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/sum-of-left-leaves/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
private:
    int sumOfLeftLeavesUtil(TreeNode *root, bool isLeft) {
        if (root == nullptr) {
            return 0;
        }
        if (root->left == nullptr && root->right == nullptr) {
            return isLeft ? root->val : 0;
        }
        return sumOfLeftLeavesUtil(root->left, true) + sumOfLeftLeavesUtil(root->right, false);
    }
public:
    int sumOfLeftLeaves(TreeNode *root) {
        return sumOfLeftLeavesUtil(root, false);
    }
};
