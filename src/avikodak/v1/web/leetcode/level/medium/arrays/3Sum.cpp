/****************************************************************************************************************************************************
 *  File Name                   : 3Sum.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/medium/arrays/3Sum.cpp
 *  Created on                  : Jan 11, 2023 :: 11:19:04 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int> &nums) {
        std::sort(nums.begin(), nums.end());
        int outerCrawler = 0;
        int frontCrawler, rearCrawler;
        int sum;
        std::vector<std::vector<int>> result;
        while (outerCrawler < nums.size() - 2) {
            frontCrawler = outerCrawler + 1;
            rearCrawler = nums.size() - 1;
            sum = 0;
            while (frontCrawler < rearCrawler) {
                sum = nums[outerCrawler] + nums[frontCrawler] + nums[rearCrawler];
                if (sum == 0) {
                    std::vector<int> triplet;
                    triplet.push_back(nums[outerCrawler]);
                    triplet.push_back(nums[frontCrawler]);
                    triplet.push_back(nums[rearCrawler]);
                    result.push_back(triplet);
                    while (frontCrawler < rearCrawler && nums[frontCrawler] == nums[frontCrawler + 1]) {
                        frontCrawler++;
                    }
                    while (frontCrawler < rearCrawler && nums[rearCrawler] == nums[rearCrawler - 1]) {
                        rearCrawler--;
                    }
                } else if (sum < 0) {
                    while (frontCrawler < rearCrawler && nums[frontCrawler] == nums[frontCrawler + 1]) {
                        frontCrawler++;
                    }
                } else {
                    while (frontCrawler < rearCrawler && nums[rearCrawler] == nums[rearCrawler - 1]) {
                        rearCrawler--;
                    }
                }
                while (outerCrawler + 1 < nums.size() && nums[outerCrawler] == nums[outerCrawler + 1]) {
                    outerCrawler++;
                }
            }
        }
        return result;
    }
};
