/****************************************************************************************************************************************************
 *  File Name                   : RemoveDuplicateSortedLists.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/lists/RemoveDuplicateSortedLists.cpp
 *  Created on                  : Dec 7, 2022 :: 8:33:52 PM
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
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode *crawler = head;
        ListNode *temp;
        while (crawler->next != nullptr) {
            if (crawler->next->val == crawler->val) {
                temp = crawler->next;
                crawler->next = crawler->next->next;
                free(temp);
            } else {
                crawler = crawler->next;
            }
        }
        return head;
    }
};
