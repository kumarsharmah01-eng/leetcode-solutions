/*You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

You should return the array of nums such that the array follows the given conditions:

Every consecutive pair of integers have opposite signs.
For all integers with the same sign, the order in which they were present in nums is preserved.
The rearranged array begins with a positive integer.
Return the modified array after rearranging the elements to satisfy the aforementioned conditions.*/

//solution optimal 

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int posind=0,negind=1;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans[posind]=nums[i];
                posind+=2;
            }
            else{
                ans[negind]=nums[i];
                negind+=2;
            }
        }
        return ans;
    } 
};
