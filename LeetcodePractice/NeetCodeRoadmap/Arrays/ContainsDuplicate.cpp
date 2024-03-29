// 217. Contains Duplicate
// Easy
// 9.7K
// 1.2K
// company
// Apple
// company
// Microsoft
// company
// Amazon
// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// Example 1:

// Input: nums = [1,2,3,1]
// Output: true
// Example 2:

// Input: nums = [1,2,3,4]
// Output: false
// Example 3:

// Input: nums = [1,1,1,3,3,4,3,2,4,2]
// Output: true

// Constraints:

// 1 <= nums.length <= 105
// -109 <= nums[i] <= 109

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> iteratedNums;
        for (int i = 0; i < nums.size(); i++)
        {
            if (iteratedNums.find(nums[i]) != iteratedNums.end())
                return true;
            iteratedNums.insert(nums[i]);
        }
        return false;
    }
};