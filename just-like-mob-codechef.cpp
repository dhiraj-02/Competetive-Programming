//https://www.codechef.com/START66C/problems/MOBKUN

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,m,k,x;
	    cin>>n>>m>>k>>x;
	    if(k==1)
	    {
	        cout<<"yes"<<endl;
	        continue;
	    }
	    long d=x/(n*k+m);
	    if(d<1)
	    {
	        if(x>n*(k-1))
	        cout<<"yes"<<endl;
	        else
	        cout<<"no"<<endl;
	    }
	    else
	    {
	        if(x%(n*k+m)==0 || x%(n*k+m)>n*(k-1))
	        cout<<"yes"<<endl;
	        else
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}