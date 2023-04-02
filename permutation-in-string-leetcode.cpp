//https://leetcode.com/problems/permutation-in-string/

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
        return false;
       int s1c[26],s2c[26];
       for(int i=0;i<26;i++) 
       {
           s1c[i]=0;
           s2c[i]=0;
       }
       for(int i=0;i<s1.size();i++)
       {
           s1c[s1[i]-97]++;
           s2c[s2[i]-97]++;
       }
       int matches=0;
       for(int i=0;i<26;i++)
       {
           if(s1c[i]==s2c[i])
           matches++;
       }
       
       int l=0;
       for(int r=s1.size();r<s2.size();r++)
       {
            if(matches==26)
                return true;
            int index=s2[r]-97;
            s2c[index]++;
            if(s1c[index]==s2c[index])
            matches++;
            else if(s1c[index]+1==s2c[index])
            matches--;
            
            index=s2[l]-97;
            s2c[index]--;
            if(s1c[index]==s2c[index])
            matches++;
            else if(s1c[index]==s2c[index]+1)
            matches--;
            l++;
       }
       return matches==26;
    }
};