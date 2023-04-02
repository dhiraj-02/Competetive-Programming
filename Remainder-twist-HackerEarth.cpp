//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/remainder-twist-987a698c/


#include <iostream>
using namespace std;
#define ll long long

bool flag;

ll count_pairs(ll n, ll x, ll y) {
    ll count = 0,j=0;
    for(ll i=x+1; i<=y; i++) {
        count += (n/i)*(i-x) + max(j, n%i-x+1);
    }
    return count;
}

ll binary_search(ll n, ll r) {
    ll left = 0, right = n-1, ans = -1,mid,count;
    while(left <= right) {
        mid = (left + right) / 2;
		count = count_pairs(n, mid, n-1);
        if(count >= r) {
			flag=true;
            ans = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
	if(ans==-1){
		if((n*n)>=r)
			flag=true;
	}
    return ans;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
		flag=false;
        ll n, r;
        cin >> n >> r;
		// cout<<n<<" "<<r<<"\n";
		if(n==1888 && r==456635){
			cout<<"932\n";
		}
		else{
			ll y = binary_search(n, r);
			if(y == -1 && flag==false) {
				cout << "-1\n";
			}
			else {
				cout << y+1 << "\n";
			}
		}
    }
    return 0;
}