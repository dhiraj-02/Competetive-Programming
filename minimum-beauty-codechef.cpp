//https://www.codechef.com/problems/MINBEAUTY

#include <iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	//map<long,int> mp;
	while(t--)
	{
	    int n;
	    long min=INT_MAX;
	    cin>>n;
	    long a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(int i=1;i<n-1;i++)
	    {
	        int med=a[i];
	        int l=0;
	        int r=n-1;
	        
	        while(l<r && i>l && i<r)
	        {
	            int sum=a[l]+a[r]+a[i];
	            int dif=abs(sum-3*med);
	            if(dif<min) min=dif;
	            if(min==0) break;
	            if(sum>3*med) r--;
	            else l++;
	        }
	        if(min==0)
	        break;
	    }
	    cout<<min<<endl;
	}
	return 0;
}