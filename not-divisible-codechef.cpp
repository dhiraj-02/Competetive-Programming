//https://www.codechef.com/START76C/problems/NOTDIVISIBLE

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
	    for(int i=0;i<n;i++)
	    {
	        if(i%2==0)
	        cout<<"3"<<" ";
	        else
	        cout<<"4"<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}