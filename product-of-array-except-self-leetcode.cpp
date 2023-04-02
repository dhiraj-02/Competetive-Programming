//https://leetcode.com/problems/product-of-array-except-self/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long max=1;
        int zero=0;
        for(auto i:nums)
        {
            if(i!=0)
            max=max*i;
            else
            zero++;
        }
        vector<int> v;
        if(zero>=2)
        {
            for(auto i:nums)
            v.push_back(0);
        }
        else if(zero==1)
        {
            for(auto i:nums)
            {
                if(i==0)
                v.push_back(max);
                else
                v.push_back(0);
            }
        }
        else
        {
           for(auto i:nums)
            {
                v.push_back(max/i);  
            }
        }
        return v;
    }
};