//https://leetcode.com/problems/sliding-window-maximum/

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> v;
        if(k==1)
        return nums;
        if(k==nums.size()){
            v.push_back(*max_element(nums.begin(),nums.end()));
            return v;
        }
        deque<int> dq;
        int l=0,r=0;
        while(r<nums.size())
        {
            while(!dq.empty() && nums[dq.back()] < nums[r])
            {
                dq.pop_back();
            }
            dq.push_back(r);
            if(l>dq.front())
            dq.pop_front();
            if(r+1>=k)
            {
                v.push_back(nums[dq[0]]);
                l++;
            }
            r++;
        }
        
        
        return v;
    }
};