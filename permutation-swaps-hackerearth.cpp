//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/guess-permutation-2-be0b2b90/

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
		ll n;
		cin>>n;
		ll a,sum=0,msum=0,i;
		int flag=1;
		for(i=0;i<n;i++)
		{
			cin>>a;
			sum+=a;
			msum+=i+1;
			if(sum<msum)
				flag=0;
		}
		if(sum==msum && flag==1)
		{
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
}
 
 