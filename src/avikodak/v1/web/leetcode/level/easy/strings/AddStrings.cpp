/****************************************************************************************************************************************************
 *  File Name                   : AddStrings.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/strings/AddStrings.cpp
 *  Created on                  : Feb 3, 2023 :: 7:44:10 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/add-strings/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    string addStrings(string firstInput, string secondInput) {
        string result;
        int carry = 0;
        int firstCrawler = firstInput.size() - 1, secondCrawler = secondInput.size() - 1;
        int sum = 0;
        while (firstCrawler >= 0 || secondCrawler >= 0) {
            sum = carry;
            if (firstCrawler >= 0) {
                sum += firstInput[firstCrawler] - '0';
                firstCrawler--;
            }
            if (secondCrawler >= 0) {
                sum += secondInput[secondCrawler] - '0';
                secondCrawler--;
            }
            result.push_back((char) (sum % 10 + '0'));
            carry = sum / 10;
        }
        while (carry) {
            result.push_back((char) carry % 10 + '0');
            carry /= 10;
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
