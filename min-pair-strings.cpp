// You are given two strings A and B that are made of lowercase english alphabets. Find the numbers of different pairs (( i , j) , (k , l )) such that the substring A[i...j] and B[k...l] are equal and the value of j-i+1 is minimum.

// Input Format

// The first line has string denoting A.
// The second line has string denoting B.
// Constraints

// 1 <= |A|,|B| <= 100000
// Output Format

// Print the number of different pairs ((i , j) , (k , l)) such that the substrings A[i....j] and B[k....l] are equal and the value of j-i+1 is minimum.

// Sample Input 0

// abdc 
// bd
// Sample Output 0

// 2
// Explanation 0

// From the given strigs, the pairs are ((1,1),(0,0)) and ((2,2),(1,1))

// For the first pair ((1,1),(0,0)) , substring ‘b’ of ‘abdc’ matches with substring ‘b’ of ‘bd’. And the index of ‘b’ in ‘abdc’ is 1 and index of ‘b’ in ‘bd’ is 0. Therefore , i=1 and j=1, from string A, And k= 0 and l=0 from string B.

// Similarly for the second pair.

// Note: Substring ‘bd’ also matches in both the strings, but it is not the smallest length possible.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string a,b;
    int min=0;
    cin>>a>>b;
    map<char,int> mp;
    for(auto i:a) mp[i]++;
    for(auto i:b)
    {
        min+=mp[i];
    }
    cout<<min;
    return 0;
}
