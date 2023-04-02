//https://www.codechef.com/START62D/problems/XJUMP

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,x,y,z;
	    cin>>x>>y;
	    z=x/y;
	    a=x%y;
	    z=z+a;
	    cout<<z<<endl;
	}
	return 0;
}
