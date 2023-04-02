

//Problem link : https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int ss[arr.size()+1][sum+1];
        for(int i=1;i<=sum+1;i++) ss[0][i]=0;
        for(int i=0;i<=arr.size();i++) ss[i][0]=1;
        
        for(int i=1;i<=arr.size();i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(ss[i-1][j]==1)
                    ss[i][j]=1;
                else
                {
                    if(arr[i-1]>j)
                        ss[i][j]=0;
                    else
                        ss[i][j]=ss[i-1][j-arr[i-1]];
                }
            }
        }
        return ss[arr.size()][sum];
    }
};
