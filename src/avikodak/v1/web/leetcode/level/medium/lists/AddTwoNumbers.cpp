/****************************************************************************************************************************************************
 *  File Name                   : AddTwoNumbers.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/medium/lists/AddTwoNumbers.cpp
 *  Created on                  : Jan 11, 2023 :: 10:25:11 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/add-two-numbers/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    ListNode* addTwoNumbers(ListNode *listOne, ListNode *listTwo) {
        int sum = 0, carry = 0;
        ListNode *resultHead = new ListNode(0);
        ListNode *crawler = resultHead;
        while (listOne != nullptr || listTwo != nullptr) {
            sum = carry;
            if (listTwo == nullptr) {
                sum += listOne->val;
                listOne = listOne->next;
            } else if (listOne == nullptr) {
                sum += listTwo->val;
                listTwo = listTwo->next;
            } else {
                sum += listOne->val;
                sum += listTwo->val;
                listOne = listOne->next;
                listTwo = listTwo->next;
            }
            carry = sum / 10;
            crawler->next = new ListNode(sum % 10);
            crawler = crawler->next;
        }
        while (carry) {
            crawler->next = new ListNode(carry % 10);
            carry /= 10;
            crawler = crawler->next;
        }

        return resultHead->next;
    }
};
