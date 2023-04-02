//https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/minimum-score-1528c5c0/


#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
		ll n,k,one=0,zero=0;
		cin>>n>>k;
		//cout<<n<<" "<<k<<endl;
		vector<int> arr(n);
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			//cout<<arr[i]<<" ";
			if(arr[i]==1)
			one++;
			else
			zero++;
		}
		//cout<<endl;
		if(one==0 || zero==0)
		{
			cout<<"0"<<endl;
			for(int i=0;i<k-1;i++)
			{
				cout<<i+1<<" "<<i+1<<endl;
			}
			cout<<k<<" "<<n<<endl;
		}
		//vector<pair<int,int>> v(k);
		else
		{
		one=0,zero=0;
		for(int i=k-1;i<n;i++)
		{
			if(arr[i]==1)
			one++;
			else
			zero++;
		}
		if(one==0 || zero==0)
		{
			cout<<"0"<<endl;
			for(int i=1;i<k;i++)
			{
			cout<<i<<" "<<i<<endl;
			}
			cout<<k<<" "<<n<<endl;
		}
		else
		{
			ll index=n-1;
			vector<pair<ll,ll>> v(k);
			ll m=0,i;
			int prev=arr[n-1];
			for( i=n-1;i>=0 && m<k-1;)
			{
				for(ll j=i;n-(n-j-1)>=k-m;j--)
				{
					//cout<<n-(n-j)<<" "<<k-m<<endl;
					if(arr[j]!=prev)
					{
						//prev=arr[i];
						break;
					}
					i--;
				}
 
				//cout<<i<<" "<<index<<endl;
				prev=arr[i];
				v[m]={i+2,index+1};
				m++;
				index=i;
			}
			//cout<<"out"<<endl;
			v[k-1]={1,index+1};
			m++;
			//cout<<"here "<<m<<endl;
			one=0;
			zero=0;
			//cout<<index<<endl;
			for(ll i=index;i>=0;i--)
			{
				if(arr[i]==1)
				one++;
				else
				zero++;
			}
			if(one==0||zero==0)
			{
				cout<<"0"<<endl;
				for(ll i=k-1;i>=0;i--)
				cout<<v[i].first<<" "<<v[i].second<<endl;
			}
			else
			{
				cout<<"1"<<endl;
				for(int i=1;i<k;i++)
				{
				cout<<i<<" "<<i<<endl;
				}
				cout<<k<<" "<<n<<endl;
 
 
            }
 
 
		}
 
		// else
		// {
 
		// 	// ll index=0;
		// 	// for()
		// }
 
 
 
		}
 
    return 0;
}