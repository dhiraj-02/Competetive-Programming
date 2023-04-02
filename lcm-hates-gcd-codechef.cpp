//https://www.codechef.com/START74C/problems/LCM_GCD

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long int a,b;
	    cin>>a>>b;
	    long int x= __gcd(a,b);
	    cout<<lcm(a,x)-__gcd(b,x)<<endl;
	}
	return 0;
}