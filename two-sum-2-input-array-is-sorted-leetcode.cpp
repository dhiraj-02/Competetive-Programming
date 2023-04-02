//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        for(;i<j;)
        {
            if(nums[i]+nums[j]>target)
            j--;
            else if(nums[i]+nums[j]<target)
            i++;
            else
            return {i+1,j+1};
        }
        return {0,0};
    }
};