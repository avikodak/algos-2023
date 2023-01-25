/****************************************************************************************************************************************************
 *  File Name                   : ReverseList.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/list/ReverseList.cpp
 *  Created on                  : Jan 24, 2023 :: 8:44:29 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/reverse-linked-list/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    ListNode* reverseList(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode *result = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return result;
    }
};

