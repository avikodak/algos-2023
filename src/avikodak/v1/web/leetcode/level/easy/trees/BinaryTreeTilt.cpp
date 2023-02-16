/****************************************************************************************************************************************************
 *  File Name                   : BinaryTreeTilt.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/BinaryTreeTilt.cpp
 *  Created on                  : Feb 15, 2023 :: 7:13:35 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/binary-tree-tilt/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
private:
    int findTiltUtil(TreeNode *root, int &parentSum) {
        if (root == nullptr) {
            return 0;
        }
        int leftSum = 0;
        int left = findTiltUtil(root->left, leftSum);
        int rightSum = 0;
        int right = findTiltUtil(root->right, rightSum);
        parentSum = root->val + leftSum + rightSum;
        return abs(leftSum - rightSum) + left + right;
    }

public:
    int findTilt(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        }
        int sum = 0;
        return findTiltUtil(root, sum);
    }
};
