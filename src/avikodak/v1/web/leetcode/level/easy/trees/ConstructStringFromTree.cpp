/****************************************************************************************************************************************************
 *  File Name                   : ConstructStringFromTree.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/ConstructStringFromTree.cpp
 *  Created on                  : Feb 15, 2023 :: 8:32:16 PM
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
    string tree2strUtil(TreeNode *root, bool isRoot) {
        if (root == nullptr) {
            return "";
        }
        string result;
        if (!isRoot) {
            result.append("(");
        }
        result += to_string(root->val);
        if (root->left == nullptr) {
            if (root->right != nullptr) {
                result += "()";
            }
        } else {
            result += tree2strUtil(root->left, false);
        }
        result += tree2strUtil(root->right, false);
        if (!isRoot) {
            result.append(")");
        }
        return result;
    }
public:
    string tree2str(TreeNode *root) {
        if (root == nullptr) {
            return "";
        }
        return tree2strUtil(root, true);
    }
};
