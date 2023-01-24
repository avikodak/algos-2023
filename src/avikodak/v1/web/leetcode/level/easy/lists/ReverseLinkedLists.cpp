/****************************************************************************************************************************************************
 *  File Name                   : ReverseLinkedLists.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/lists/ReverseLinkedLists.cpp
 *  Created on                  : Jan 14, 2023 :: 6:32:44 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/reverse-linked-list/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    ListNode* reverseList(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode *revHead = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return revHead;
    }
};
