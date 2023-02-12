/****************************************************************************************************************************************************
 *  File Name                   : MiddleOfSill.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/list/MiddleOfSill.cpp
 *  Created on                  : Feb 11, 2023 :: 1:05:54 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/middle-of-the-linked-list/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    ListNode* middleNode(ListNode *head) {
        if (head == nullptr) {
            return nullptr;
        }
        ListNode *fastPtr = head, *slowPtr = head;
        while (fastPtr != nullptr && fastPtr->next != nullptr) {
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }
        return slowPtr;
    }
};
