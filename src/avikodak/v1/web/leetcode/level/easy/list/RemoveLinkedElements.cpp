/****************************************************************************************************************************************************
 *  File Name                   : RemoveLinkedElements.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/list/RemoveLinkedElements.cpp
 *  Created on                  : Jan 28, 2023 :: 8:40:06 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/remove-linked-list-elements/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    ListNode* removeElements(ListNode *head, int val) {
        ListNode *result = new ListNode(0);
        result->next = head;
        ListNode *crawler = result;
        while (crawler != nullptr && crawler->next != nullptr) {
            if (crawler->next->val == val) {
                crawler->next = crawler->next->next;
            } else {
                crawler = crawler->next;
            }
        }
        return result->next;
    }
};

