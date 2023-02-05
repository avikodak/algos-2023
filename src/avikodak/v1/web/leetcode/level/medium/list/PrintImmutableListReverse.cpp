/****************************************************************************************************************************************************
 *  File Name                   : PrintImmutableListReverse.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/medium/list/PrintImmutableListReverse.cpp
 *  Created on                  : Feb 4, 2023 :: 11:17:00 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/print-immutable-linked-list-in-reverse/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class ImmutableListNode {
public:
    void printValue(); // print the value of the node.
    ImmutableListNode* getNext(); // return the next node.
};

class Solution {
public:
    void printLinkedListInReverse(ImmutableListNode *head) {
        if (head == nullptr) {
            return;
        }
        printLinkedListInReverse(head->getNext());
        head->printValue();
    }
};
