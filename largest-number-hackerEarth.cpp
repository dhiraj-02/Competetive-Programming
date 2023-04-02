// https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/largest-number-7-eee0b7c3/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    int k;

    cin >> n >> k;

    stack<char> s;

    for(char c : n){
        while(k > 0 && !s.empty() && s.top() < c){
            s.pop();
            k--;
        }
        s.push(c);
    }

    while(k > 0){
        s.pop();
        k--;
    }

    string ans = "";
    while(!s.empty()){
        ans += s.top();
        s.pop();
    }

    reverse(ans.begin(), ans.end());

    cout << ans << endl;

    return 0;
}