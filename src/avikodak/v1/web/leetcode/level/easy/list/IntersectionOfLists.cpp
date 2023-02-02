/****************************************************************************************************************************************************
 *  File Name                   : IntersectionOfLists.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/list/IntersectionOfLists.cpp
 *  Created on                  : Feb 1, 2023 :: 6:26:44 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/intersection-of-two-linked-lists/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    ListNode* getIntersectionNode(ListNode *firstList, ListNode *secondList) {
        map<ListNode*, bool> seenNodes;
        ListNode *crawler = firstList;
        while (crawler != nullptr) {
            seenNodes[crawler] = true;
            crawler = crawler->next;
        }
        crawler = secondList;
        while (crawler != nullptr) {
            auto itToSeenNodes = seenNodes.find(crawler);
            if (itToSeenNodes != seenNodes.end()) {
                return true;
            }
            crawler = crawler->next;
        }
        return false;
    }
};

