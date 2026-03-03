/*Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

 

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:

Input: nums = [1,2,3], k = 3
Output: 2*/

//solution 

class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int, int> presumcount;
        int presum = 0;
        int count = 0;
        presumcount[0] = 1;
        for (int i = 0; i < n; i++) {
            presum += arr[i];
            int remove = presum - k;
            if (presumcount.find(remove) != presumcount.end()) {
                count +=presumcount[remove];
            }
           presumcount[presum]++;
        }
        return count;
    }
};
