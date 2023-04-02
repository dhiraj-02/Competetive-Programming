// There is a fun fair in town led by a dynamic manager. With no doubts on the creativity and the leadership qualities of the manager, he is also a multi-discipline believer. A technology pandit who once visited the fun fair said that every shop has a lucky number. The lucky number is the number of bits set to one in the shop number assigned to each.

// Manager now wants to build a table which comprises of these (shop number, lucky number) so that he can further make queries to find the sum of lucky numbers of several shops put together.

// Input Format

// First line contains the number N, indicating the number of shops. Followed in the next line is the N shop numbers separated by space.

// Constraints

// 1 <= N <= 4294967295
// The shop number supplied can be between  1 to 4294967295
// The shop numbers may repeat
// Output Format

// Integer indicating the total lucky number of all shops together.

// Sample Input 0

// 4
// 1 2 3 4
// Sample Output 0

// 5
// Explanation 0

// There are 4 shops. Lucky number is number of bits set to 1 in each shop number. Lucky_number(1) = 1, Lucky_number(2) = 1, Lucky_number(3) = 2 and Lucky_number(4) = 1. Hence the output is 5.

#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int n,i;
    cin>>n;
    long long t,ans=0;
    map<long long,long long> mp;
    for(i=0;i<n;i++)
    {
        cin>>t;
        if(mp[t]>0)
            ans+=mp[t];
        else
        {
            long long b=0,t1=t;
            while(t>0)
            {
                if(t%2!=0)
                    b++;
                t=t/2;
            }
            mp[t1]=b;
            ans+=b;
        }
        
    }
    cout<<ans;
    return 0;
}