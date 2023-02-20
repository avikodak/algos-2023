/****************************************************************************************************************************************************
 *  File Name                   : BinaryLevelOrderTraversal.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/medium/tree/BinaryLevelOrderTraversal.cpp
 *  Created on                  : Feb 19, 2023 :: 7:50:42 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/binary-tree-level-order-traversal/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode *root) {
        vector<vector<int>> result;
        if(root == nullptr) {
            return result;
        }
        queue<TreeNode *> auxSpace;
        int size = 0;
        auxSpace.push(root);
        TreeNode *currentNode;
        while (!auxSpace.empty()) {
            size = auxSpace.size();
            vector<int> level;
            while (size--) {
                currentNode = auxSpace.front();
                level.push_back(currentNode->val);
                auxSpace.pop();
                if (currentNode->left != nullptr) {
                    auxSpace.push(currentNode->left);
                }
                if (currentNode->right != nullptr) {
                    auxSpace.push(currentNode->right);
                }
            }
            result.push_back(level);
        }
        return result;
    }
};
