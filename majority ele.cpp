/*Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.*/

//solution optimal one 
class Solution {
public:
    int majorityElement(vector<int>& v) {
        int cn;
        int ele;
        for(int i=0; i<v.size();i++){
            if(cn==0){
                cn=1;
                ele=v[i];

            }
            else if(v[i]==ele){
                cn++;
            }
            else{
                cn--;
            }
        }
        int cnt1=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==ele) cnt1++;
        }
        if(cnt1>(v.size()/2)){
            return ele;

        }
        return -1;
    }
};
