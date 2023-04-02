//https://www.codechef.com/JAN231D/problems/ARRHALVES

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,i;
	    cin>>n;
	    long long int a[2*n],b[2*n];
	    for(i=0;i<2*n;i++)
	    {
	        cin>>a[i];
	        b[i]=a[i];
	    }
	    sort(a, a + (sizeof(a) / sizeof(a[0])));
	    long long int swaps=0;
	    long int k=0;
	    i=0;
	    while(k<n)
	    {
	        if(b[i]>=a[n])
	        {
	            i++;
	            continue;
	        }
	        else
	        {
	            swaps=swaps+i-k;
	            k++;
	            i++;
	        }
	    }
	    cout<<swaps<<endl;
	}
	return 0;
}