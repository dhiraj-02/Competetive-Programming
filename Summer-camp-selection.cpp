#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int p,c,best,t,max;
    cin>>p>>c>>best;
    vector<int> v;
    for(int i=0;i<p;i++)
    {
        max=0;
        for(int j=0;j<c;j++)
        {
            cin>>t;
            v.push_back(t);
        }
        sort(v.begin(),v.end(),greater<int>());
        for(int k=0;k<best;k++)
            max+=v[k];
        v.clear();
        cout<<max/best<<endl;
    }
    
    return 0;
}