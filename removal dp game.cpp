#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll dp[5000][5000];

ll help(vector<ll> &v, int start, int end)
{
    if(start>end)
    return 0;

    if(dp[start][end]!=INT_MIN)
    return dp[start][end];

    ll one = v[start] + min( help(v,start+2,end), help(v,start+1,end-1));
    ll two = v[end] + min( help(v,start,end-2), help(v,start+1,end-1));

    return dp[start][end] = max(one,two);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            dp[i][j]=INT_MIN;
        }
    }
    cout<<help(v,0,n-1);
    return 0;
}
