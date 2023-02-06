/****************************************************************************************************************************************************
 *  File Name                   : SumOfNodesEvenValueGrandParents.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/medium/tree/SumOfNodesEvenValueGrandParents.cpp
 *  Created on                  : Feb 5, 2023 :: 6:40:29 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/sum-of-nodes-with-even-valued-grandparent/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
private:
    int sumEvenGrandparentUtil(TreeNode *root, TreeNode *grandParent, TreeNode *parent) {
        if (root == nullptr) {
            return 0;
        }
        int sum = 0;
        if (grandParent != nullptr && grandParent->val % 2 == 0) {
            sum += root->val;
        }
        return sum + sumEvenGrandparentUtil(root->left, parent, root)
                + sumEvenGrandparentUtil(root->right, parent, root);
    }
public:
    int sumEvenGrandparent(TreeNode *root) {
        return sumEvenGrandparentUtil(root, nullptr, nullptr);
    }
};
