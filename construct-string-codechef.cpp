//https://www.codechef.com/START83D/problems/CONSTR

#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    string s;
	    cin>>s;
	    if(n<3)
	    cout<<s<<endl;
	    else
	    {
	        string ans="";
	        char prev=s[0];
	        long c=1;
	        for(int i=1;i<n;i++)
	        {
	            if(s[i]==prev)
	            {
	                c++;
	            }
	            else
	            {
	                ans+=prev;
	                if(c%2==0)
	                ans+=prev;
	                c=1;
	                prev=s[i];
	            }
	        }
	        ans+=prev;
	        if(c%2==0)
	        ans+=prev;
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
