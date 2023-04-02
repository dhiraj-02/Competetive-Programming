//https://www.codechef.com/problems/TACHSTCK

#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    ll d;
    cin>>d;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int ans=0;
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0;i<n-1;)
    {
        if(v[i]-v[i+1]<=d)
        {
            ans++;
            i+=2;
        }
        else
        i++;
        
    }
    cout<<ans;
    return 0;
}