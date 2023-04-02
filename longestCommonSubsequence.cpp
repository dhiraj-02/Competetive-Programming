#include<bits/stdc++.h>
using namespace std;

int longestCommonSubsequence(string text1, string text2) {
        int memo[text2.length()+1];
        for(int i=0;i<=text2.length();i++)
        {
            memo[i]=0;
        }
        for(int i=1;i<=text1.length();i++)
        {
            int prev=0;
            for(int j=1;j<=text2.length();j++)
            {
                int temp=memo[j];
                if(text1[i-1]==text2[j-1])
                {
                    memo[j]=prev+1;
                }
                else
                {
                    memo[j]=max(memo[j-1],memo[j]);
                }
                prev=temp;
            }
        }
        return memo[text2.length()];
}

int main()
{
    string a="abcffffd";
    string b="abcd";
    cout<<longestCommonSubsequence(a,b)<<endl;
    return 0;
}
