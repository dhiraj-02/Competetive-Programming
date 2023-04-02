// Over a given N men and women, each women indicates her choice of preferences. A women can also indicate -1 saying she is not interested in anyone anymore. However, each women has to give N preferences and atleast one valid preference.

// The task is to identify all single men (men who were not preferred by any).

// Input Format

// N indicating number of men and women followed by N lines. Each line has N entires indicating Nth women's preferences.

// Constraints

// 3 <= N <= 10
// All ids are numbered from 1 to N
// Output Format

// The id's of single men. Print results in multiple lines if there are more than one ids. Print -1 if no single men.

// Sample Input 0

// 3
// 1 2 -1
// 1 -1 -1
// 2 -1 -1
// Sample Output 0

// 3
// Explanation 0

// There are 3 men and women. The first line indicates three preferences of women number 1 and so on. Man with id 3 was not preferred by any. Hence the result is 3.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,t;
    cin>>n;
    int a[n+1]={0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>t;
            if(t!=-1)
                a[t]++;
        }
            
    }
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        //cout<<a[i]<<" ";
        if(a[i]<1){
            cout<<i<<"\n";
            flag=1;
        }
            //cout<<i<<" ";
    }
    if(flag==0)
        cout<<"-1";
    return 0;
}
