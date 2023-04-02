#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    int id[n],wt[n],val[n];
    for(int i=0;i<n;i++)
    {
        cin>>id[i]>>wt[i]>>val[i];
    }
    int c;
    cin>>c;
    int v[n+1][c+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=c;j++)
        {
            if(i==0 || j==0)
                v[i][j]=0;
            else
            {
                if(j-wt[i-1]<0)
                    v[i][j]=v[i-1][j];
                else
                    v[i][j]=max(v[i-1][j],val[i-1]+v[i-1][j-wt[i-1]]);
            }
        }
    }
    int res=v[n][c];
    vector<int> vec;
    for (int i = n; i > 0 && res > 0; i--) 
    {
         
        // either the result comes from the top
        // (K[i-1][w]) or from (val[i-1] + K[i-1]
        // [w-wt[i-1]]) as in Knapsack table. If
        // it comes from the latter one/ it means
        // the item is included.
        if (res == v[i - 1][c])
            continue;   
        else {
 
            // This item is included.
            vec.insert(vec.begin(),id[i-1]);
             
            // Since this weight is included its
            // value is deducted
            res = res - val[i - 1];
            c = c - wt[i - 1];
        }
    }
    if(vec.size()==0)
        cout<<"-1";
    else
    for(auto i:vec)
        cout<<i<<" ";
}
