/****************************************************************************************************************************************************
 *  File Name                   : RemoveDuplicateSortedList.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/list/RemoveDuplicateSortedList.cpp
 *  Created on                  : Jan 23, 2023 :: 8:54:49 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/remove-duplicates-from-sorted-list/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    ListNode* deleteDuplicates(ListNode *head) {
        ListNode *crawler = head;
        while (crawler != nullptr && crawler->next != nullptr) {
            if (crawler->val == crawler->next->val) {
                crawler->next = crawler->next->next;
            } else {
                crawler = crawler->next;
            }
        }
        return head;
    }
};
