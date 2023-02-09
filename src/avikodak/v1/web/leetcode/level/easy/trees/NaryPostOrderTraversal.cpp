/****************************************************************************************************************************************************
 *  File Name                   : NaryPostOrderTraversal.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/NaryPostOrderTraversal.cpp
 *  Created on                  : Feb 8, 2023 :: 7:53:33 PM
 *  Author                      : avikodak
 *  URL                         : TODO
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
    void postorderUtil(Node *root, vector<int> &auxSpace) {
        if (root == nullptr) {
            return;
        }
        for (int counter = 0; counter < root->children.size(); counter++) {
            postorderUtil(root->children[counter], auxSpace);
        }
        auxSpace.push_back(root->val);
    }
public:
    vector<int> postorder(Node *root) {
        vector<int> auxSpace;
        if (root == nullptr) {
            return auxSpace;
        }
        postorderUtil(root, auxSpace);
        return auxSpace;
    }

};
