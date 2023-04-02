//https://www.codechef.com/problems/SQRTCBRT

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll countCubes(ll b)
{
    float ans=floor((cbrtl(b)));
    //cout<<ans<<" ";
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        if(x==1)
        cout<<"4"<<endl;
        else if(x==2)
        cout<<"16"<<endl;
        
        else
        {
            ll temp=x;
            while(1)
            {
                ll ans=temp*temp;
                
                ll cnt=temp - countCubes(ans);
                //cout<<temp<<" "<<countCubes(ans)<<" "<<cnt<<endl;
                if(cnt>=x)  
                {
                    cout<<ans<<endl;
                    break;
                }
                
                temp+=(x-cnt);
            }
         }
    }
    return 0;
}