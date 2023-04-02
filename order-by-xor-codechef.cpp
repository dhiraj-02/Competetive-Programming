//https://www.codechef.com/START83D/problems/XOR_ORDER


#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    ll a,b,c;
	    cin>>a>>b>>c;
	    int cnt=0;
	    ll ans;
	    for(int i=0;i<=100;i++)
	    {
	        if((a^i)<(b^i) && (b^i)<(c^i))
	        {
	            cnt++;
	            ans=i;
	            break;
	        }
	    }
	    if(cnt==0)
	    {
	        cout<<"-1"<<endl;
	        
	    }
	    else
	    cout<<ans<<endl;
	}
	return 0;
}
