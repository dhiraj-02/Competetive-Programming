//https://leetcode.com/problems/longest-repeating-character-replacement/


class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char,int> mp;
        int l=0;
        int ans=0;
        int maxf=0;
        for(int r=0;r<s.size();r++)
        {
            mp[s[r]]++;
            maxf=max(maxf,mp[s[r]]);
            while((r-l+1)-maxf > k)
            {
                mp[s[l]]--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    }
};