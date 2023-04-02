//https://www.codechef.com/problems/PREFONES


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	        //vector<long> v;
	        //long ones=0;
	        long c=0;
	        long m=0;
	        long first=0;
	        long i;
	        for(i=0;i<n;i++)
	        {
	            if(s[i]=='0')
	            {
	                break;
	            }
	            else
	            first++;
	        }
	       for(;i<n;i++)
	        {
	            if(s[i]=='0')
	            {
	               m=max(m,c);
	                c=0;
	            }
	            else
	            c++;
	        }
	        m=max(m,c);
	        cout<<first+m<<endl;   
	   }
	return 0;
}
