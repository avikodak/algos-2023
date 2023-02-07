/****************************************************************************************************************************************************
 *  File Name                   : FindModeInBst.cpp
 *  File Location               : /algos-2023/src/avikodak/v1/web/leetcode/level/easy/trees/FindModeInBst.cpp
 *  Created on                  : Feb 6, 2023 :: 8:27:45 PM
 *  Author                      : avikodak
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include "v1/common/Includes.h"

using namespace std;

class Solution {
private:
    void findModeUtil(TreeNode *root, int &maxFrequency, map<int, int> &frequency) {
        if (root == nullptr) {
            return;
        }
        auto itToFreq = frequency.find(root->val);
        if (itToFreq == frequency.end()) {
            frequency[root->val] = 1;
        } else {
            frequency[root->val]++;
        }
        maxFrequency = max(maxFrequency, frequency[root->val]);
        findModeUtil(root->left, maxFrequency, frequency);
        findModeUtil(root->right, maxFrequency, frequency);
    }
public:
    vector<int> findMode(TreeNode *root) {
        map<int, int> frequencyMap;
        int maxFrequency = 0;
        vector<int> result;
        findModeUtil(root, maxFrequency, frequencyMap);
        for (auto itToFreq = frequencyMap.begin(); itToFreq != frequencyMap.end(); itToFreq++) {
            if (itToFreq->second == maxFrequency) {
                result.push_back(itToFreq->first);
            }
        }
        return result;
    }
};

