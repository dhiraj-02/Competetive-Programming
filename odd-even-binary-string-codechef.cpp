//https://www.codechef.com/START74C/problems/ODDEVENBS

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a=0;
	    for(int i=0;i<n;i++)
	    {
	        int x;cin>>x;
	        if(x==0) a++;
	    }
	    if(a%2==0)
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	}
	return 0;
}