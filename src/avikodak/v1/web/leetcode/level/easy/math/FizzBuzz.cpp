/****************************************************************************************************************************************************
 *  File Name                   : FizzBuzz.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/math/FizzBuzz.cpp
 *  Created on                  : Feb 4, 2023 :: 5:49:55 PM
 *  Author                      : avikodak
 *  URL                         : https://leetcode.com/problems/fizz-buzz/
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for (int counter = 1; counter <= n; counter++) {
            if (counter % 15 == 0) {
                result.push_back("FizzBuzz");
            } else if (counter % 3 == 0) {
                result.push_back("Fizz");
            } else if (counter % 5 == 0) {
                result.push_back("Buzz");
            } else {
                result.push_back(to_string(counter));
            }
        }
        return result;
    }
};
