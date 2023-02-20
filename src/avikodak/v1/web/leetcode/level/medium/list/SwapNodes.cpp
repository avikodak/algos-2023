/****************************************************************************************************************************************************
 *  File Name                   : SwapNodes.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/medium/list/SwapNodes.cpp
 *  Created on                  : Feb 19, 2023 :: 7:01:12 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/swap-nodes-in-pairs/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    ListNode* swapPairs(ListNode *head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode *result = new ListNode(0);
        ListNode *crawler = head;
        ListNode *resultHead = result;
        ListNode *temp;
        while (crawler != nullptr && crawler->next != nullptr) {
            result->next = crawler->next;
            temp = crawler->next;
            crawler->next = crawler->next->next;
            temp->next = crawler;
            crawler = crawler->next;
            result = result->next->next;
        }
        return resultHead->next;
    }
};
