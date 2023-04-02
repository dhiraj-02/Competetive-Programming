//https://www.codechef.com/JAN231D/problems/MINMAXARR

#include<bits/stdc++.h>
using namespace std;

//Aliases
using ll = long long;
using ld = long double;
using ull = unsigned long long;

//macros
#define nline "\n"
#define MOD 998244353
#define INF 1e18
#define int long long
#define all(x) begin(x), end(x)
#define Debug(x)   cout << #x << " = " << x << "\n"
#define pb emplace_back

// operator overloading
template <typename T> // cin >> vector<T>
istream& operator>>(istream& istream, vector<T>& v)
{
    for (auto& it : v)
        cin >> it;
    return istream;
}
template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
    for (auto &it : c)
        cout << it << " ";
    return ostream;
}







bool help(int n, vector<int>&ds, int mid) {
    vector<int>vec = ds;
    if (vec[0] > mid)return false;
    //cout<<vec<<" ";
    //cout<<mid<<"\n";
    for (int i = 1; i < n; i++) {
        if (vec[i - 1] < mid)vec[i] = vec[i] - (mid - vec[i - 1]), vec[i - 1] = mid;
        if (vec[i] > mid)return false;
    }
    //cout<<vec<<" ";
    if (*max_element(all(vec)) > mid)return false;
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int>vec(n);
    cin >> vec;
    int i = 0;
    int j = *max_element(all(vec));
    int ans = 1e9;
    while (i <= j) {
        int mid = (i + j) / 2;
        if (help(n, vec, mid)) {
            ans = min(ans, mid);
            j = mid - 1;
        }
        else {
            i = mid + 1;
        }
    }
    cout << ans << "\n";
}

signed main() {
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }

}