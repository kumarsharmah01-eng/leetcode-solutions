
//Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

//Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. After removing duplicates, return the number of unique elements k.

//The first k elements of nums should contain the unique numbers in sorted order. The remaining elements beyond index k - 1 can be ignored.
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> seen;   // hash table
        int k = 0;

        for (int i = 0; i < nums.size(); i++) {
            // if element is not already in hash table
            if (seen.find(nums[i]) == seen.end()) {
                seen.insert(nums[i]);   // mark as seen
                nums[k] = nums[i];      // place unique element
                k++;
            }
        }
        return k;
    }
};
