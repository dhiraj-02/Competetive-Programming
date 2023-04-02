//https://www.codechef.com/START77C/problems/CHRGES


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int N;
	    cin>>N;
	    string s;
	    cin>>s;
	    int flag=0,cnt=0,ans=0;
	    char a;
	    for(int i=0;i<N;i++)
	    {
	        if(flag==0)
	        {
	            if(s[i]=='+' || s[i]=='-')
	            {
	                a=s[i];
	                flag++;
	            }
	        }
	        if(flag==1)
	        {
	            if(s[i]=='0')
	            {
	                cnt++;
	            }
	            else if(s[i]==a)
	            cnt=0;
	            else
	            {
	                if(cnt%2!=0)
	                ans++;
	                a=s[i];
	                cnt=0;
	            }
	        }
	    }
	    if(flag==1)
	    cout<<ans<<endl;
	    else
	    cout<<N<<endl;
	}
	return 0;
}

