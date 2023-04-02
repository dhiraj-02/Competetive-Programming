//https://www.codechef.com/problems/AVGPERM

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v;
	   int a=n-1;
	   int b=n-2;
	   int c=n-3;
	   int temp=1;
	   for(int i=0;i<n;i++){
	       if(i==0){
	           v.push_back(a);
	       }
	       else if(i==1){
	            v.push_back(b);
	       }
	       else if(i==n-2){
	           v.push_back(c);
	       }
	       else if(i==n-1){
	           v.push_back(i+1);
	       }
	       else{
	           v.push_back(temp);
	           temp++;
	       }
	   }
	   for(int i=0;i<n;i++){
	       cout<<v[i]<<" ";
	   }
	   cout<<endl; 
	}
	return 0;
}