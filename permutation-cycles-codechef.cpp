//https://www.codechef.com/problems/PCYCLE

#include <iostream>
#include <bits/stdc++.h> 


using namespace std;

int main() {
	// your code goes here
	int n ;
	cin >> n ;
	
	int a[n];
	for(int i = 0 ; i < n ; i++){
	    cin >> a[i];
	    a[i]--;
	}
	
	int pos = 0;
	set<int> s ; 
	vector<vector<int>> ans ; 

	while(s.size() < n ){
	    int prev = pos;
	    vector<int> x ; 
	    while(s.find(pos) == s.end()){
	        s.insert(pos);
	        x.push_back(pos);
	        pos = a[pos];
	    }
	    if(x.size() > 0)
	      ans.push_back(x);
	    pos = prev;
	    pos++;
	}
	cout << ans.size() << endl;
	for(auto &v : ans){
	    for(auto &num : v){
	        cout << num + 1<< " ";
	    }
	    cout << v[0] + 1 ;
	    cout << endl;
	}
	
	return 0;
}
