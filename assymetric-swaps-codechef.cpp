//https://www.codechef.com/JAN231D/problems/ARRSWAP


#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	// your code goes here
	long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,i,min=99999999999999;
	    cin>>n;
	    long long int a[2*n];
	    for(i=0;i<2*n;i++)
	    cin>>a[i];
	    sort(a,  a + (sizeof(a) / sizeof(a[0])));
        for(i=0;i<=n;i++)
        {
            if(min>a[n-1+i]-a[i])
            min=a[n-1+i]-a[i];
        }
        cout<<min<<endl;
	}
	return 0;
}

        
	    
	    
