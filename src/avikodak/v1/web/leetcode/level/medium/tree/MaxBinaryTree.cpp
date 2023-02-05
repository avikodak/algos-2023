/****************************************************************************************************************************************************
 *  File Name                   : MaxBinaryTree.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/medium/tree/MaxBinaryTree.cpp
 *  Created on                  : Feb 4, 2023 :: 11:55:29 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/maximum-binary-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
private:
    TreeNode* constructMaximumBinaryTreeUtil(vector<int> &userInput, int start, int end) {
        if (start > end) {
            return nullptr;
        }
        int maxValue = INT_MIN, maxIndex;
        for (int counter = start; counter <= end; counter++) {
            if (userInput[counter] > maxValue) {
                maxValue = userInput[counter];
                maxIndex = counter;
            }
        }
        TreeNode *root = new TreeNode(maxValue);
        root->left = constructMaximumBinaryTreeUtil(userInput, start, maxIndex - 1);
        root->right = constructMaximumBinaryTreeUtil(userInput, maxIndex + 1, end);
        return root;
    }
public:
    TreeNode* constructMaximumBinaryTree(vector<int> &nums) {
        return constructMaximumBinaryTreeUtil(nums, 0, nums.size() - 1);
    }
};
