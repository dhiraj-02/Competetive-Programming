//https://leetcode.com/problems/number-of-1-bits/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        //cout<<n;
        int ans=0;
        while(n)
        {
            ans+=n & 1;
            n>>=1;
        }
        return ans;
    }
};