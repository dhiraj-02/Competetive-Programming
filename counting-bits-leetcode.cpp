//https://leetcode.com/problems/counting-bits/

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        int ms=1;
        for(int i=1;i<=n;i++)
        {
            if(ms*2==i)
            ms=i;
            ans[i]=1+ans[i-ms];
        }
        return ans;
    }
};