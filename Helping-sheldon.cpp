// This questions was contributed by your senior, Sneha Bankolli.

// It is a well known fact that Dr Sheldon Cooper is a hypochondriac. He has forgotten how to count because the stress of contracting coronavirus is driving him insane. Help him to solve this easy solution.

// The following operation is repeated an infinite number of times on an initially empty string:

// A zeros are appended to the string.

// B ones are appended to a string.

// Find the count of zeros in first N characters.

// Input Format

// N A B is provided in single line seperated by space.  
// Constraints

// 1 <= N <= 10^18
// A,B >= 0
// 0 < A+B <= 10^18
// All values in input are integers
// Output Format

// An integer indicating number of 0s in first N characters. 
// Sample Input 0

// 8 3 4
// Sample Output 0

// 4
// Explanation 0

// There is an infinite string of repetitions of 3 zeros followed by 4 ones. We need to count the number of zeros in first 8 characters. The string generated with first 8 characters is 00011110 and number of zeros in it is 4.





#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int n,z,o;
    cin>>n>>z>>o;
    long long tem=n,c=0;
    if(tem<z)
        cout<<tem;
    else
    {
        c+=z*(tem/(z+o));
        tem=tem%(z+o);
        if(tem<z)
            c+=tem;
        else
            c+=z;
        cout<<c;
        
    }
        
    return 0;
}
