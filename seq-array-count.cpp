// You are given an array of size of N. Find the longest increasing sequence and print the minimum and maximum range numbers.

// Input Format

// The first line has N indicating the size of the array. The next line has N array numbers separated by space.

// Constraints

// 1 <= N <= 100
// The magnitude of each array number is less than 10000.
// In case of multiple longest sequences, select the range of the first.
// Duplicates are valid and to be considered as the part of the sequence count. 
// Output Format

// Two integers indicating the longest range

// Sample Input 0

// 8
// 1 3 2 4 5 9 10 1  
// Sample Output 0

// 2 10
// Explanation 0

// There are 8 numbers in the array. The sequence ** 2 4 5 9 10** is the longest increasing sequence. The starting number is 2 and ending number is 10.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int arr[n];
    cin>>arr[0];
    int a=arr[0];
    int b=a,a1=a,b1=a;
    int m=1,c=1;
    for(int i=1;i<n;i++)
    {
        cin>>arr[i];
        if(b1<=arr[i])
        {
            c++;
            b1=arr[i];
        }
        else
        {
            if(c>m)
            {
                m=c;
                a=a1;
                b=b1;
                c=1;
            }
            a1=arr[i];
            b1=arr[i];
        }
        
    }
    if(c>m)
    {
        a=a1;
        b=b1;
    }
    cout<<a<<" "<<b;
    return 0;
}
