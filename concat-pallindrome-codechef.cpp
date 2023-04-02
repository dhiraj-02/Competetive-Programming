//odechef.com/START77C/problems/CONCATPAL?tab=statement

#include<bits/stdc++.h>
using namespace std;



int main() 
{
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        long m,n;
        string s1, s2;
    
        cin>>n >> m >> s1>>s2;
        map<char, int> freq;
        
        if(m > n)
         {
             swap(m, n);
             swap(s1, s2);
         }
         for(int i=0; i<n; i++)
         freq[s1[i]] += 1;
        
        for(int i=0; i<m; i++)
         freq[s2[i]] -= 1;
        
        int flag = 1, cnt = 0, diff = n-m;
         for(auto i : freq)
         {
        
            if(i.second < 0)
            {
        
                flag = 0;
                break;
            }
        
            if(i.second % 2 == 0)
            continue;
            
            if(cnt)
            flag = 0;
            
            else
            cnt = 1;
        }
         if(flag)
        cout<<"yes"<<endl;
         else
        cout<<"no"<<endl;
        }
return 0;
}