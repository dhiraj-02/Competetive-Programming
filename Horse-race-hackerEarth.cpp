// https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/horse-race-122f4ccc/


//horse race
#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,m,k,e,ex=0;
		cin>>n>>m>>k;
		vector<int>b(m);
		for(int i=0;i<n;i++){
			cin>>e;
			if(e<=m)
				b[e-1]++;
			else
				ex++;
		}
		sort(b.begin(),b.end());
		while(k-- && ex--){
			b[0]++;
			for(int i=0;i<m-1;i++){
				if(b[i]>b[i+1])
					swap(b[i],b[i+1]);
				else
					break;
			}
		}
		while(k--){
			if(abs(b[0]-b[m-1])<=1)
				break;
			else{
				b[0]++;
				b[m-1]--;
				for(int i=0;i<m-1;i++){
					if(b[i]>b[i+1])
						swap(b[i],b[i+1]);
					else
						break;
				}
				for(int i=m-1;i>=1;i--){
					if(b[i-1]>b[i])
						swap(b[i],b[i-1]);
					else
						break;	
				}

			}
		}
		cout<<b[0]<<"\n";
	}
}