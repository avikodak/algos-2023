/****************************************************************************************************************************************************
 *  File Name                   : MergeTwoSortedLists.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/lists/MergeTwoSortedLists.cpp
 *  Created on                  : Dec 6, 2022 :: 5:05:20 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/merge-two-sorted-lists/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    ListNode* mergeTwoLists(ListNode *firstList, ListNode *secondList) {
        ListNode *result = new ListNode(0);
        ListNode *crawler = result;
        while (firstList != nullptr || secondList != nullptr) {
            if (secondList == nullptr) {
                crawler->next = firstList;
                firstList = firstList->next;
            } else if (firstList == nullptr) {
                crawler->next = secondList;
                secondList = secondList->next;
            } else if (firstList->val < secondList->val) {
                crawler->next = firstList;
                firstList = firstList->next;
            } else {
                crawler->next = secondList;
                secondList = secondList->next;
            }
            crawler = crawler->next;
        }
        return result->next;
    }
};
