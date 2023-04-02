#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector<int> arr;
    int t;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        arr.push_back(t);
    }
    sort(arr.begin(),arr.end());
    
    string s1="",s2="";
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
            s1+=to_string(arr[i]);
        else
            s2+=to_string(arr[i]);
    }
    int ans=stoi(s1)+stoi(s2);
    cout<<ans;
    return 0;
}