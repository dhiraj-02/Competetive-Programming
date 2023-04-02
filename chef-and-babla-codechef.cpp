//https://www.codechef.com/START74C/problems/BAB_I


#include <iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long int a;
	    long long rangeFirst = INT_MIN;
	    long long rangeSecond = INT_MAX;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a;
	        if(a >=0 && a < rangeSecond)
	            rangeSecond = a;
	        
	        if(a < 0 && a > rangeFirst)
	            rangeFirst=a;
	    }
	   
	       
	    long long ans=min(rangeSecond,abs(rangeFirst));
	    cout<<ans-1<<endl;
	}
	return 0;
}