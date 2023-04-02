//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/special-subarray-3-4de176ca/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		ll ans=0,xr,sum;
		vector<ll> arr(n);
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n;i++)
		{
			xr=0,sum=0;
			for(int j=0;j<n-i;j++)
			{
				xr^=arr[i+j];
				sum+=arr[i+j];
				if(xr!=sum)
				break;
				ans++;
				//cout<<arr[i+j]<<" ";
			}
			//cout<<endl;
		}
		cout<< ans<<endl;
	}
 
    return 0;
}