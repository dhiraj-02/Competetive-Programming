//https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/xorrrr-40caac1a/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n,a,b,sum=0,count=0,i;
	cin>>n;
	if(n%2==1){
		cout<<0;
		return 0;
	}
	vector<vector<ll>> m(n+1);
    for(i=1;i<=n;i++){
        m[i] = vector<ll>(1,0);
        // memset(m[i], 0, sizeof(ll)*(n+1)); // Initialize m[i] to 0
    }
	for(i=0;i<n-1;i++){
		cin>>a>>b;
		m[a].push_back(b);
		m[b].push_back(a);
	}
	
	bool visited[n+1];
	for(i=1;i<=n;i++){
		visited[i]=0;
	}
	ll q[n+n];
	ll f=1,r=1,u;
	q[r]=1;
	visited[1]=1;
 
	ll paths[n+1];
	paths[1]=0;
	sum=0;
	// paths[1].push_back(1);
	while(f<=r && count<n){
		u=q[f];
		f++;
		for(i=1;i<m[u].size();i++){
			if(visited[m[u][i]]==0){
				// cout<<u<<" "<<i<<"\n";
				// ppo--;
				paths[m[u][i]]=(u+m[u][i])^paths[u];
				sum^=paths[m[u][i]];
				visited[m[u][i]]=1;
				count++;
				r++;
				q[r]=m[u][i];
			}
		}
	}
	// for(int i=1;i<=n;i++){
	// 	for(int j=0;j<paths[i].size();j++)
	// 		cout<<paths[i][j]<<" ";
	// 	cout<<"\n";
	// }
 
	// for(ll i=2;i<=n;i++){
	// 	for(ll j=0;j<paths[i].size()-1;j++){
	// 		sum^=(paths[i][j]+paths[i][j+1]);
	// 	}
	// }
	cout<<sum;
	return 0;
}