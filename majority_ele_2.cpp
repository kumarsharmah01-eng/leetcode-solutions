/*Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

 

Example 1:

Input: nums = [3,2,3]
Output: [3]
Example 2:

Input: nums = [1]
Output: [1]
Example 3:

Input: nums = [1,2]
Output: [1,2]*/

//solution

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0;
        int el1 = INT_MIN, el2 = INT_MIN;
        for(int num : nums){
            if(cnt1 == 0 && num != el2){
                el1 = num;
                cnt1 = 1;}
            else if(cnt2 == 0 && num != el1){
                el2 = num;
                cnt2 = 1; }
            else if(num == el1){
                cnt1++; }
            else if(num == el2){
                cnt2++;}
            else{
                cnt1--;
                cnt2--;}
        }
        cnt1 = cnt2 = 0;
        for(int num : nums){
            if(num == el1) cnt1++;
            if(num == el2) cnt2++; }
        vector<int> ans;
        if(cnt1 > nums.size()/3) ans.push_back(el1);
        if(cnt2 > nums.size()/3) ans.push_back(el2);
        return ans;
    }
};
