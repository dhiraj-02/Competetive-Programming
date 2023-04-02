//https://www.hackerearth.com/problem/algorithm/is-palindrome-2-eb50514b/

#include<bits/stdc++.h>
using namespace std;
 
int main() 
{
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
 
	string s;
	cin >> s;
	int c;
	cin >>c;
	int i;
 
	char A[s.length()];
	for(i=0;i<s.length();i++)
		A[i]=s[i];
 
	
	for(int j=0;j<c;j++)
	{
		int f;
		cin >> f;
		int l,r;
 
		if(f == 1)
		{
			char ch;
			cin >> l >> r >> ch;
 
			for(i = l - 1;i <= r - 1;i++)
				A[i] = ch;
		}
 
		else
		{
			cin >> l >> r;
			int bitvector = 0, mask = 0;
 
			
			for(i=l-1;i<r;i++)
			{
				int x = A[i] - 'a';
				mask = 1 << x;		
				bitvector = bitvector ^ mask;
			}
		
			if((bitvector & (bitvector - 1)) == 0)
				cout<<"Yes"<<endl;
			else
				cout<<"No"<<endl;
		}
	}
 
	return 0;
}