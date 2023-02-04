/****************************************************************************************************************************************************
 *  File Name                   : PalindromeList.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/list/PalindromeList.cpp
 *  Created on                  : Feb 3, 2023 :: 6:24:46 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/palindrome-linked-list/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
private:
    bool isPalindromeUtil(ListNode *head, ListNode **frontCrawler) {
        if (head == nullptr) {
            return true;
        }
        bool result = isPalindromeUtil(head->next, frontCrawler);
        if (head->val != (*frontCrawler)->val) {
            return false;
        }
        (*frontCrawler) = (*frontCrawler)->next;
        return result;
    }
public:
    bool isPalindrome(ListNode *head) {
        if (head == nullptr) {
            return true;
        }
        ListNode *frontCrawler = head;
        return isPalindromeUtil(head, &frontCrawler);
    }
};
