/*Given an integer array nums, find a subarray that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.

Note that the product of an array with a single element is the value of that element.

 

Example 1:

Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
Example 2:

Input: nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.*/

//solution 

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxp = nums[0];
        int minp = nums[0];
        int ans = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < 0)
                swap(maxp, minp);
            maxp = max(nums[i], maxp * nums[i]);
            minp = min(nums[i], minp * nums[i]);
            ans = max(ans, maxp);
        }
        return ans;
    }
};
