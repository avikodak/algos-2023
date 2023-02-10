/****************************************************************************************************************************************************
 *  File Name                   : SearchInBst.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/bst/SearchInBst.cpp
 *  Created on                  : Feb 9, 2023 :: 8:13:10 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/search-in-a-binary-search-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    TreeNode* searchBST(TreeNode *root, int val) {
        if (root == nullptr) {
            return nullptr;
        }
        TreeNode *crawler = root;
        while (crawler != nullptr) {
            if (crawler->val == val) {
                return crawler;
            } else if (crawler->val > val) {
                crawler = crawler->left;
            } else {
                crawler = crawler->right;
            }
        }
        return nullptr;
    }
};
