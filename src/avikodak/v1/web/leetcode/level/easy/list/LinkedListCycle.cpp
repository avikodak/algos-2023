/****************************************************************************************************************************************************
 *  File Name                   : LinkedListCycle.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/list/LinkedListCycle.cpp
 *  Created on                  : Jan 25, 2023 :: 9:43:07 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/linked-list-cycle/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return false;
        }
        ListNode *slowPtr = head;
        ListNode *fastPtr = head;
        while (slowPtr != nullptr && fastPtr != nullptr && fastPtr->next != nullptr) {
            if (slowPtr == fastPtr) {
                return true;
            }
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
        }
        return false;
    }
};

