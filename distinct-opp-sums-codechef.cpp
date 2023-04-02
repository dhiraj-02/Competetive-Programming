//https://www.codechef.com/START79C/problems/DISTOPPSUMS

#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> v(n+1);
	    for(int i=1;i<=n/2;i++)
	    {
	        v[i]=i;
	    }
	    int j=n;
	    for(int i=(n/2)+1;i<=n;i++)
	    {
	        v[i]=j;
	        j--;
	    }
	    for(int i=1;i<=n;i++)
	    {
	        cout<<v[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}