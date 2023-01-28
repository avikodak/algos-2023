/****************************************************************************************************************************************************
 *  File Name                   : BinaryTreePaths.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/BinaryTreePaths.cpp
 *  Created on                  : Jan 27, 2023 :: 7:50:45 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
    void binaryTreePathsUtil(TreeNode *root, string rootToLeaf, vector<string> &result) {
        if (root == nullptr) {
            return;
        }
        rootToLeaf.append(to_string(root->val));
        if (root->left == nullptr && root->right == nullptr) {
            result.push_back(rootToLeaf);
            return;
        }
        if (!rootToLeaf.empty()) {
            rootToLeaf.append("->");
        }
        binaryTreePathsUtil(root->left, rootToLeaf, result);
        binaryTreePathsUtil(root->right, rootToLeaf, result);
    }
public:
    vector<string> binaryTreePaths(TreeNode *root) {
        vector<string> result;
        string currentPath;
        binaryTreePathsUtil(root, currentPath, result);
        return result;
    }
};

