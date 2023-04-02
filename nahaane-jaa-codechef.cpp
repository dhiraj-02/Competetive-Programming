//https://www.codechef.com/START65D/problems/EQSARRAY

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	long k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    long a[n];
	    int flag=0,m;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]==k && flag==0)
	        {
	            flag=1;
	            m=i;
	            
	        }
	    }
	    if(n==1)
	    {
	        if(k==a[0])
	        cout<<"yes"<<endl;
	        else
	        cout<<"no"<<endl;
	    }
	    else{
	    if(flag==1 && m!=n-1)
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	    }
	}
	
	return 0;
}