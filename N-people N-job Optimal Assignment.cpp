#include<bits/stdc++.h>
using namespace std;
#define ll long long


/*
input n=3
3
3 2 7
5 1 3
2 7 2

input n=4
4
4 1 4 2
5 6 7 3
2 3 5 7
1 5 6 7


*/


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int cost[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>cost[i][j];
        }
    }
    vector<int> dp(pow(2,n),INT_MAX);
    dp[0]=0;
    //for(int i=0;i<pow(2,n);i++)
    //{
    //    cout<<dp[i]<<" ";

    //}
    //cout<<endl;
    for(int mask=0;mask<pow(2,n);mask++)
    {
        int x=0;
        int temp=mask;
        while(temp)
        {
            temp&=(temp-1);
            x++;
        }
        for(int j=0;j<n;j++)
        {
            //cout<<(mask&(1<<j))<<endl;
            if(!(mask & (1 << j)))
            {
                dp[mask | 1<<j]=min(dp[mask | 1<<j], dp[mask]+cost[x][j]);
            }
        }
    }
    for(int i=0;i<pow(2,n);i++)
    {
        cout<<dp[i]<<" ";

    }
    cout<<endl;
    cout<<dp[pow(2,n)-1];
    return 0;
}
