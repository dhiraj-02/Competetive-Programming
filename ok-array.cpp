An array is said to be okay, when the array has k numbers repeating exactly k number of times.

print 1 if array is okay-array and -1 otherwise.

Input Format

The first line indicates T test cases followed by each test case and details as mentioned below in newlines.

Each test case has: size of the array, N, in a new line, followed by N array items in the next line. It is then followed by the number k.

Constraints

1 <= T <= 100
1 <= N <= 1000
The array items range between -500 to 500
Output Format

Print 1 or -1 accordingly, for each test case in a newline.

Sample Input 0

1
5
2 2 3 3 1
2
Sample Output 0

1
Explanation 0

// There is only one test case and the given k is 2. There are two numbers 2 and 3, where both have repeated two times. Hence the array is okay-array.

#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,k;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>k;
        map<int, int> mp;
        for(auto i:a) mp[i]++;
        for(auto i: mp)
        {
            if(i.second==k)
                c++;
        }
        if(c==k)
            cout<<"1"<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
