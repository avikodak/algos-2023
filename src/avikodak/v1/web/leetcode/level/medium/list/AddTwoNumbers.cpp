/****************************************************************************************************************************************************
 *  File Name                   : AddTwoNumbers.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/medium/list/AddTwoNumbers.cpp
 *  Created on                  : Jan 24, 2023 :: 7:12:34 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    ListNode* addTwoNumbers(ListNode *firstList, ListNode *secondList) {
        ListNode *result = new ListNode(0);
        ListNode *crawler = result;
        int carry = 0;
        int sum = 0;
        while (firstList != nullptr || secondList != nullptr) {
            sum = carry;
            if (firstList != nullptr) {
                sum += firstList->val;
                firstList = firstList->next;
            }
            if (secondList != nullptr) {
                sum += secondList->val;
                secondList = secondList->next;
            }
            carry = sum / 10;
            crawler->next = new ListNode(sum % 10);
            crawler = crawler->next;
        }
        while(carry) {
            crawler->next = new ListNode(carry % 10);
            crawler = crawler->next;
            carry /= 10;
        }
        return result->next;
    }
};
