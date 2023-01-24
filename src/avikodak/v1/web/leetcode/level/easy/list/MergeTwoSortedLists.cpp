/****************************************************************************************************************************************************
 *  File Name                   : MergeTwoSortedLists.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/list/MergeTwoSortedLists.cpp
 *  Created on                  : Jan 23, 2023 :: 7:48:45 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/merge-two-sorted-lists/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    ListNode* mergeTwoLists(ListNode *firstInput, ListNode *secondInput) {
        ListNode *result = new ListNode(0);
        ListNode *crawler;
        while (firstInput != nullptr || secondInput != nullptr) {
            if (firstInput == nullptr) {
                crawler->next = secondInput;
                break;
            } else if (secondInput == nullptr) {
                crawler->next = firstInput;
                break;
            } else {
                if (firstInput->val < secondInput->val) {
                    crawler->next = firstInput;
                    firstInput = firstInput->next;
                } else {
                    crawler->next = secondInput;
                    secondInput = secondInput->next;
                }
                crawler = crawler->next;
            }
        }

        return result->next;
    }
};
