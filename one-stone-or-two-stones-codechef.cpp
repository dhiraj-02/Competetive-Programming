//https://www.codechef.com/START79C/problems/ONEORTWO

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
        ll x,y;
        cin>>x>>y;
        if(x+y<=3)
        cout<<"CHEF"<<endl;
        else if(x==y && x%2==0)
        cout<<"CHEFINA"<<endl;
        else if(x==y && x%2!=0)
        cout<<"CHEF"<<endl;
        else if(x-y>=2)
        cout<<"CHEF"<<endl;
        else if(y-x>=2)
        cout<<"CHEFINA"<<endl;
        else if(y-x==1 && x%2!=0)
        cout<<"CHEF"<<endl;
        else if(x-y==1 && x%2==0)
        cout<<"CHEF"<<endl;
        else 
        cout<<"CHEFINA"<<endl;
    }
    return 0;
}