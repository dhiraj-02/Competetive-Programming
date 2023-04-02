//https://www.codechef.com/DSAPREP_01/problems/EMPR

#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t,z;
	double p,x,y;
	cin>>t;
	while(t--){
	    cin>>p>>x>>y>>z;
	    if(z==1)
	    p=p+p*(y/100.0);
	    else
	    p=p-p*(x/100.0);
	    cout<<fixed <<p<< setprecision(10)<<endl;
	}
	return 0;
}