/****************************************************************************************************************************************************
 *  File Name                   : BstToSumTree.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/medium/tree/BstToSumTree.cpp
 *  Created on                  : Feb 4, 2023 :: 11:42:43 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
private:
    void bstToGstUtil(TreeNode *root, int &sum) {
        if (root == nullptr) {
            return;
        }
        bstToGstUtil(root->right, sum);
        root->val = sum + root->val;
        sum = root->val;
        bstToGstUtil(root->left, sum);
    }
public:
    TreeNode* bstToGst(TreeNode *root) {
        int sum = 0;
        bstToGstUtil(root, sum);
        return root;
    }
};

