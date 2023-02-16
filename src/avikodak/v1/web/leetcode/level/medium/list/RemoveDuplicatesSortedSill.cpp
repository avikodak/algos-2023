/****************************************************************************************************************************************************
 *  File Name                   : RemoveDuplicatesSortedSill.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/medium/list/RemoveDuplicatesSortedSill.cpp
 *  Created on                  : Feb 15, 2023 :: 9:46:51 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    ListNode* deleteDuplicates(ListNode *head) {
        ListNode *result = new ListNode(0);
        ListNode *crawler = head;
        ListNode *current;
        ListNode *resultCrawler = result;
        while (crawler != nullptr) {
            current = crawler;
            while (current != nullptr && current->next != nullptr && current->val == current->next->val) {
                current = current->next;
            }
            if (current == crawler) {
                resultCrawler->next = new ListNode(crawler->val);
                resultCrawler = resultCrawler->next;
                crawler = crawler->next;
            } else {
                crawler = current->next;
            }
        }
        return result->next;
    }
};
