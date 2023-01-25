/****************************************************************************************************************************************************
 *  File Name                   : PostOrderTraversal.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/PostOrderTraversal.cpp
 *  Created on                  : Jan 24, 2023 :: 7:57:46 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
private:
    void postorderTraversalUtil(TreeNode *root, vector<int> &auxSpace) {
        if (root == nullptr) {
            return;
        }
        postorderTraversalUtil(root->left, auxSpace);
        postorderTraversalUtil(root->right, auxSpace);
        auxSpace.push_back(root->val);
    }
public:
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> auxSpace;
        postorderTraversalUtil(root, auxSpace);
        return auxSpace;
    }
};
