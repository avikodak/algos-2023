/****************************************************************************************************************************************************
 *  File Name                   : NaryTreeDepth.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/NaryTreeDepth.cpp
 *  Created on                  : Feb 9, 2023 :: 8:15:38 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/maximum-depth-of-n-ary-tree/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {
    }

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    int maxDepth(Node *root) {
        if (root == nullptr) {
            return 0;
        }
        int currentMaxDepth = 0;
        for (int counter = 0; counter < root->children.size(); counter++) {
            currentMaxDepth = max(currentMaxDepth, maxDepth(root->children[counter]));
        }
        return currentMaxDepth + 1;
    }
};
