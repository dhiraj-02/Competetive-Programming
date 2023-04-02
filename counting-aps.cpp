#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s1;
    int c=0;
    getline(cin,s1);
    //cout<<s1<<endl;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]=='A')
        {
            if(s1[i+1]=='P')
            {
                if(s1[i+2]=='S')
                {
                    c++;
                    i+=2;
                }
            }
        }
    }
    cout<<c;
    return 0;
}
