/****************************************************************************************************************************************************
 *  File Name                   : ConstructFromPreInOrder.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/medium/tree/ConstructFromPreInOrder.cpp
 *  Created on                  : Feb 15, 2023 :: 10:22:24 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
private:
    TreeNode* buildTreeUtil(vector<int> &postorder, vector<int> &inorder, int &postOrderIndex, int inOrderStartIndex,
            int inOrderEndIndex) {
        if (inOrderStartIndex > inOrderEndIndex) {
            return nullptr;
        }
        postOrderIndex--;
        TreeNode *root = new TreeNode(postorder[postOrderIndex]);
        int breakIndex;
        for (int counter = inOrderStartIndex; counter <= inOrderEndIndex; counter++) {
            if (inorder[counter] == postorder[postOrderIndex]) {
                breakIndex = counter;
                break;
            }
        }
        root->right = buildTreeUtil(postorder, inorder, postOrderIndex, breakIndex + 1, inOrderEndIndex);
        root->left = buildTreeUtil(postorder, inorder, postOrderIndex, inOrderStartIndex, breakIndex - 1);
        return root;
    }
public:
    TreeNode* buildTree(vector<int> &inorder, vector<int> &postorder) {
        int postOrderIndex = postorder.size();
        return buildTreeUtil(postorder, inorder, postOrderIndex, 0, inorder.size() - 1);
    }
};

