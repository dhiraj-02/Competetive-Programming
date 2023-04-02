#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s,s1;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
            s1+=s[i];
    }
    int n;
    cin>>n;
    int t=0;
    string tem;
    for(int i=0;i<n;i++)
    {
        cin>>tem;
        if(tem=="request")
            t++;
        else if(tem=="cancel")
        {
            if(t==0)
                t=0;
            else
                t--;
        }
        else
            cout<<s1<<t<<endl;
    }
    
    return 0;
}
