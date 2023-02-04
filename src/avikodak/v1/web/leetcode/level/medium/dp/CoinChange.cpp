/****************************************************************************************************************************************************
 *  File Name                   : CoinChange.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/medium/dp/CoinChange.cpp
 *  Created on                  : Feb 2, 2023 :: 8:52:40 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/coin-change/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    int coinChange(vector<int> &coins, int amount) {
        vector<vector<int>> auxSpace(amount + 1, vector<int>(coins.size() + 1, 0));
        for (int amountCounter = 1; amountCounter <= amount; amountCounter++) {
            for (int coinCounter = 1; coinCounter <= coins.size(); coinCounter++) {

            }
        }
    }
};
