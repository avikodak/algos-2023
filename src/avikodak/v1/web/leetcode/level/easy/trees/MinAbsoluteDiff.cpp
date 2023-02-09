/****************************************************************************************************************************************************
 *  File Name                   : MinAbsoluteDiff.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/MinAbsoluteDiff.cpp
 *  Created on                  : Feb 8, 2023 :: 6:56:10 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/minimum-absolute-difference-in-bst/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
private:
    TreeNode *prevNode = nullptr;

public:
    int getMinimumDifference(TreeNode *root) {
        if (root == nullptr) {
            return INT_MAX;
        }
        int leftMin = getMinimumDifference(root->left);
        int currentDiff;
        if (prevNode != nullptr) {
            currentDiff = min(currentDiff, abs(root->val - prevNode->val));
        }
        prevNode = root;
        int rightMin = getMinimumDifference(root->right);
        return min(min(leftMin, currentDiff), rightMin);
    }
};
