//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/equal-diverse-teams-cbdb8fe2/


#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
	cin>>t;
	//cout<<t<<endl;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		//cout<<n<<" "<<k<<endl;
		int temp;
		map<int,int> mp;
		int extra=0;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			//cout<<temp<<" "; 
			mp[temp]++;
			if(mp[temp]==2)
			extra++;
		}
		//cout<<endl;
		if(mp.size()>2*k)
		cout<<"NO"<<endl;
		else if(mp.size()==2*k)
		cout<<"YES"<<endl;
		else if(mp.size()==k && extra==k)
		cout<<"YES"<<endl;
		else if(mp.size()-k<k && mp.size()+extra>=2*k)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
    return 0;
}