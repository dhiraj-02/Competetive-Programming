//https://www.codechef.com/START79C/problems/BETDEAL

#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
       int a,b;
        cin>>a>>b;
        a=(100-a)*100;
        b=(100-b)*200;
        
       
        //cout<<a<<" "<<b<<endl;
        if(a>b)
        cout<<"SECOND"<<endl;
        else if(a<b)
        cout<<"FIRST"<<endl;
        else
        cout<<"BOTH"<<endl;
    }
    return 0;
}