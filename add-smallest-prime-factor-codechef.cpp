//https://www.codechef.com/START79C/problems/PRIMEFACT

#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (ll i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}





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
        if(x%2==0)
        {
            x=y-x;
            if(x%2==0)
            cout<<x/2<<endl;
            else
            cout<<x/2+1<<endl;
        }
        else if(isPrime(x))
        {
            x=x+x;
            if(x>=y)
            cout<<"1"<<endl;
            else
            {
                x=y-x;
                if(x%2==0)
                cout<<x/2+1<<endl;
                else
                cout<<x/2+2<<endl;
            }
        }
        else
        {
            ll i=3;
            for( i=3;i<x;i++)
            {
                if(x%i==0)
                break;
            }
            x=x+i;
            if(x>=y)
            cout<<"1"<<endl;
            else
            {
                x=y-x;
                if(x%2==0)
                cout<<x/2+1<<endl;
                else
                cout<<x/2+2<<endl;
            }
            
        }
        
    }
    
    return 0;
}