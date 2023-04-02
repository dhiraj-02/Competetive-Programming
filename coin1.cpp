#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = (int)1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    ll sum;
    cin>>sum;
    vector<ll> c(n);

    for(int i=0;i<n;i++)
    {
        //dp[i+1]=0;
        cin>>c[i];
    }

    ll dp[sum+1];
    dp[0]=1;


    for(ll i=1;i<=sum;i++)
    dp[i]=0;

    for(ll i=1;i<=sum;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i-c[j])>=0)
            {
                dp[i]=(dp[i]+dp[i-c[j]])%MOD;
                //dp[i]%=mod;
            }

        }
    }
    cout<<dp[sum];
    return 0;
}
