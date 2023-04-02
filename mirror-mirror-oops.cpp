// Every string goes through two mirrors. The first mirror changes A to Z, B to Y, C to X and so on. The second mirror reverses/switches the characters. All this happens between the given range L to R, inclusive.

// Input Format

// First line contains a string S

// Second line contains two space separated integers L and R

// Constraints

// 1 <= S <= 1500
// L and R are within the index range of S
// L and R use 1-based indexing
// All the characters are in upper case
// Output Format

// Mirror string

// Sample Input 0

// ABCDEF
// 2 4
// Sample Output 0

// AWXYEF
// Explanation 0

// Given string is ABCDEF, the value of L = 2 and R = 4.

// As we are using 1-based indexing for L and R, we need to take the substring BCD (Index of A is 1, B is 2 and so on).

// In the first step string becomes AYXWEF as B is Y, C is X and D is W.

// 2nd step we need to reverse YXW. so the string becomes: AWXYEF.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s;
    cin>>s;
    string s1=s;
    int l,r;
    cin>>l>>r;
    int index=r-1;
    for(int i=l-1;i<r;i++)
    {
        s1[index]=90-s[i]+65;
        index--;
    }
    cout<<s1;
    return 0;
}
