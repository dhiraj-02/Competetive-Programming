//https://leetcode.com/problems/3sum/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> vec;
        //vector<int> v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i>0 && nums[i-1]==nums[i])
            continue;
            int l=i+1,r=nums.size()-1;
            while(l<r)
            {
                if(nums[i]+nums[l]+nums[r]>0)
                r--;
                else if(nums[i]+nums[l]+nums[r]<0)
                l++;
                else
                {
                    // v.push_back(i);
                    // v.push_back(l);
                    // v.push_back(r);
                    vec.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    while(nums[l]==nums[l-1] && l<r)
                    l++;
                }
            }
            // if(v.size()!=0)
            // {
            //     vec.push_back(v);
            //     v.clear();
            // }
        }
        return vec;
    }
};