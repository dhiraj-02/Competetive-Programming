//https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/alices-sweets-02b1336a/

#include<bits/stdc++.h>
using namespace std;
 
// int findClosest(int A[], int B[], int C[], int p, int q, int r)
// {
 
    
// }
 
 
 
int minimumValue (int p, vector<int> A, vector<int> B, vector<int> C) {
   // Write your code here]
   int diff = INT_MAX;  // Initialize min diff
   int q=p,r=p;
 
    int res_i =0, res_j = 0, res_k = 0;
 
    int i=0,j=0,k=0;
    sort(A.begin(),A.end());sort(B.begin(),B.end());sort(C.begin(),C.end());
    while (i < p && j < q && k < r)
    {
        int minimum = min(A[i], min(B[j], C[k]));
        int maximum = max(A[i], max(B[j], C[k]));
 
        
        if (maximum-minimum < diff)
        {
             res_i = i, res_j = j, res_k = k;
             diff = maximum - minimum;
        }
 
        if (diff == 0) break;
 
        if (A[i] == minimum) i++;
        else if (B[j] == minimum) j++;
        else k++;
    }
 
    //cout<<A[res_i]<<" "<<B[res_j]<<" "<<C[res_k]<<" "<<endl;
   return abs(A[res_i]-B[res_j])+abs(A[res_i]-C[res_k])+abs(B[res_j]-C[res_k]);
//  int min=INT_MAX;
//    for(int i=0;i<p;i++)
//    {
//       for(int j=0;j<p;j++)
//       {
//          for(int k=0;k<p;k++)
//          {
//             int temp=(abs(A[i]-B[j])+abs(A[i]-C[k])+abs(B[j]-C[k]));
//             if(temp<min)
//             min=temp;
//          }
//       }
//    }
//    return min;
}
 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i_A = 0; i_A < N; i_A++)
    {
    	cin >> A[i_A];
    }
    vector<int> B(N);
    for(int i_B = 0; i_B < N; i_B++)
    {
    	cin >> B[i_B];
    }
    vector<int> C(N);
    for(int i_C = 0; i_C < N; i_C++)
    {
    	cin >> C[i_C];
    }
 
    int out_;
    out_ = minimumValue(N, A, B, C);
    cout << out_;
}
