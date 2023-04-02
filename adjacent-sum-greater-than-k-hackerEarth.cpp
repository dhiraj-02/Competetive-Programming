// https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/adjacent-sum-greater-than-k-f41e3ec4/

#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	while(num--)
	{
		long long n,k;
		cin>>n>>k;
		if(k-n>=2)
		cout<<"-1"<<endl;
		else if(k<=3)
		{
			for(long long i=1;i<=n;i++)
			{
				cout<<i<<" ";
			}
			cout<<endl;
		}
		else if(k%2!=0)
		{
			ll start=1;
			ll end=k-1;
			while(start<end)
			{
				cout<<start<<" "<<end<<" ";
				start++;
				end--;
			}
			for(ll i=k;i<=n;i++)
			cout<<i<<" ";
			cout<<endl;
		}
		else
		{
			ll start=1;
			ll end=k-1;
			while(start<end)
			{
				cout<<start<<" "<<end<<" ";
				start++;
				end--;
			}
			cout<<start<<" ";
			for(ll i=k;i<=n;i++)
			cout<<i<<" ";
			cout<<endl;
		}
	}
}
