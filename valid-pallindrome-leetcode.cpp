//https://leetcode.com/problems/valid-palindrome/

class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for(int i=0;i<s.size();i++)
        {
            if((s[i]>=97 && s[i]<=122) || (s[i]>=48 && s[i]<=57))
            s1+=s[i];
            else if(s[i]>=65 && s[i]<=90)
            s1+=tolower(s[i]);
        }
        cout<<s1;
        // if(s1.size()==1)
        // return false;
        bool flag=true;
        for(int i=0,j=s1.size()-1;i<s1.size()/2;i++,j--)
            if(s1[i]!=s1[j])
                {
                    flag=false;
                    break;
                }
        
        return flag;
    }
};