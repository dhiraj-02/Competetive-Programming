// 2
// sunrise sunset
// op
// sun

// 3
// hi hi hey
// op
// h



#include <cmath>
#include <bits/stdc++.h>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<string> v;
    string s,s1;
    int n,i,j;
    cin>>n;
    int index=0,min=9999;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s.length()<min)
        {
            min=s.length();
            index=i;
        }
        v.push_back(s);
    }
    s=v[index];
    string ans="";
    for(i=0;i<s.length();i++)
    {
        for(j=1;j<=s.length()-i;j++)
        {
            s1=s.substr(i,j);
            int flag=0;
            for(int k=0;k<n;k++)
            {
                if(v[k].find(s1)==string::npos)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0 && ans.length()<s1.length())
            {
                    ans=s1;
            }
        }
    }
    if(ans!="")
    cout<<ans;
    else
        cout<<"NAN";
    return 0;
}
