//https://www.codechef.com/START83D/problems/CHEFEREN

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b;
	    cin>>n>>a>>b;
	    if(n%2==0)
	    {
	        cout<<(b*(n/2)+(a*(n/2)))<<endl;
	    }
	    else
	    {
	        cout<<(b*((n/2)+1)+(a*(n/2)))<<endl;
	    }
	}
	return 0;
}
