#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int s;
    cin>>s;
    getchar();
    string string;
    cin>>string;
    sort(string.begin(),string.end());
    cout<<string;
    return 0;
}