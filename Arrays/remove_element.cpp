/*
Problem: Remove Element

Approach:
Two Pointers / In-place Overwrite

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count= 0;
        for(int i=0; i<nums.size(); i++){
           if(nums[i]!=val){
            nums[count]=nums[i];
            count ++;
           }

        }
        return count;
    }
};
