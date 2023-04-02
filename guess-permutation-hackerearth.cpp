//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/permutation-swaps-2-01766245/


#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void findPermutation(vector<ll> &A, int N)
{
    int lasEle = 0;
 
    // Stores the resultant permutation
    int perm[N];
    perm[0] = 0;
 
    for (int i = 1; i < N; i++) {
 
        // Update the value of lastEle
        lasEle += A[i - 1];
 
        // Initialize the value of
        // perm[i]
        perm[i] = lasEle;
    }
 
    // Stores the minimum element of
    // the array perm[]
    int sm = *min_element(perm, perm + N);
 
    // Stores the elements of the
    // permutation array perm[]
    unordered_set<int> st;
    int mx = 0;
 
    // Traverse the array
    for (int i = 0; i < N; i++) {
 
        // Update the value of perm[i]
        perm[i] += (-sm) + 1;
 
        // Update the value of mx
        mx = max(mx, perm[i]);
 
        // Insert the current element
        // in the hashset
        st.insert(perm[i]);
    }
 
    // Check if the maximum element and
    // the size of hashset is N or not
    if (mx == N and st.size() == N) {
 
        // Print the permutation
        for (int i = 0; i < N; i++) {
            cout << perm[i] << " ";
        }
		cout<<endl;
    }
 
    // Otherwise print -1
    else {
        cout << -1 << "\n";
    }
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
	cin>>t;
	while(t--)
	{
		ll n,sum=0;
		cin>>n;
		vector<ll> v(n);
		//vector<ll> num(n+1);
		//num[0]=1;
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
			//num[i]=num[i-1]+1;
			sum+=v[i];
		}
		if(sum>n || sum<-n)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			findPermutation(v, n+1);
		}
	}
    return 0;
}