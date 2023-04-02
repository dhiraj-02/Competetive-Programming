//https://www.codechef.com/DSAPREP_02/problems/CNTBIN

#include <iostream>
using namespace std;
const int N = 1e9 +7;

int main() {
	// your code goes here
	int t;
	string s;
	int n;
	cin>>t;
	while(t--){
	    cin>>n>>s;
	    int ones=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='1')
	            ones++;
	    }
	    int ans=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='1')
	            ones--;
	        else
	            ans=(ans+ones)%N;
	        if(ones==0)
	            break;
	    }
	    cout<<ans<<endl;
	}
	return 0;
}