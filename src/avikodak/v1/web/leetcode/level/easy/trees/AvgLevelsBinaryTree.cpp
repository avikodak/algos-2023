/****************************************************************************************************************************************************
 *  File Name                   : AvgLevelsBinaryTree.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/AvgLevelsBinaryTree.cpp
 *  Created on                  : Feb 19, 2023 :: 7:02:04 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    vector<double> averageOfLevels(TreeNode *root) {
        vector<double> result;
        if (root == nullptr) {
            return result;
        }
        queue<TreeNode*> auxSpace;
        auxSpace.push(root);
        TreeNode *currentNode;
        while (!auxSpace.empty()) {
            long sum = 0, numberOfNodes = 0;
            int size = auxSpace.size();
            while (size--) {
                currentNode = auxSpace.front();
                auxSpace.pop();
                numberOfNodes++;
                sum += (currentNode->val);
                if (currentNode->left != nullptr) {
                    auxSpace.push(currentNode->left);
                }
                if (currentNode->right != nullptr) {
                    auxSpace.push(currentNode->right);
                }
            }
            result.push_back((double) sum / (double) numberOfNodes);

        }
        return result;
    }
};

