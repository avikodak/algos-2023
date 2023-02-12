/****************************************************************************************************************************************************
 *  File Name                   : IncreasingOrderSearchTree.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/IncreasingOrderSearchTree.cpp
 *  Created on                  : Feb 11, 2023 :: 5:47:16 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/increasing-order-search-tree/
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
    TreeNode* increasingBST(TreeNode *root) {
        if (root == nullptr) {
            return nullptr;
        }
        increasingBST(root->right);
        if (prevNode != nullptr) {
            prevNode->left = nullptr;
        }
        root->right = prevNode;
        prevNode = root;
        increasingBST(root->left);
        return prevNode;
    }
};
