//https://www.codechef.com/COOK144C/problems/DUMBLEDORE

#include <iostream>
#include<map>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long n,m;
	cin>>n>>m;
    vector<long long int> a(n+1,0);
	long long ans=0;
	//vector<long> v;
	for(int i=0;i<m;i++)
	{
	    long int p,w;
	    cin>>p>>w;
	    a[p]+=w;
	    ans+=a[p];
	    cout<<ans<<endl;
	    
	}
	return 0;
}