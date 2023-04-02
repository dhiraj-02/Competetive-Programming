//https://leetcode.com/problems/container-with-most-water/


class Solution {
public:
    int maxArea(vector<int>& nums) {
        int m=0;
        for(int i=0,j=nums.size()-1;i<j;)
        {
            
            if(nums[i]<nums[j])
            {
                m=max(m,nums[i]*(j-i));
                i++;
            }
            else
            {
                m=max(m,nums[j]*(j-i));
                j--;
            }
        }
        return m;
    }
};