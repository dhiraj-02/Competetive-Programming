//https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> a;
        int j=0,m=0;
        for(int i=0;i<s.size();i++)
        {
            while(a.find(s[i])!=a.end())
            {
                a.erase(s[j]);
                j++;
            }
            m=max(m,i-j+1);
            a.insert(s[i]);
        }
        return m;
    }
};