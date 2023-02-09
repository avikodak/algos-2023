/****************************************************************************************************************************************************
 *  File Name                   : NaryPreOrderTraversal.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/NaryPreOrderTraversal.cpp
 *  Created on                  : Feb 8, 2023 :: 7:52:39 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/n-ary-tree-preorder-traversal/
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
private:
    void preorderUtil(Node *root, vector<int> &auxSpace) {
        if (root == nullptr) {
            return;
        }
        auxSpace.push_back(root->val);
        for (int counter = 0; counter < root->children.size(); counter++) {
            preorderUtil(root->children[counter], auxSpace);
        }
    }
public:
    vector<int> preorder(Node *root) {
        vector<int> auxSpace;
        if (root == nullptr) {
            return auxSpace;
        }
        preorderUtil(root, auxSpace);
        return auxSpace;
    }
};
