//Given an integer array nums, find the subarray with the largest sum, and return its sum.

// optimal soultion 

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cns = nums[0]; 
        int maxs = nums[0]; 

        for (int i = 1; i < nums.size(); i++) {  
            cns = max(nums[i], cns + nums[i]);
            maxs = max(maxs, cns);
        }

        return maxs;
    }
};
