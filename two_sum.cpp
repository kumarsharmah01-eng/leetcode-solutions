/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;  // value → index map

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            // agar complement already map me hai
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            // current number ko map me daal do
            mp[nums[i]] = i;
        }

        return {}; // agar koi pair nahi mila
    }
};
