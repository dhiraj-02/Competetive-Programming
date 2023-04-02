// Note: This question idea and test cases were contributed by your senior Nikhil Lingadhal.

// A group of friends decided to go for a road trip. Ned, is the planner in the group and plans way too much. For the proposed trip, he has made a plan of gas refill. Every city has a condition though that during the refill, the tank is emptied and refilled again. Every city also has number of cities the refill will last for.

// Find the minimal number of refils required to move from source city to destination city.

// Input Format

// Array size N indicating the number of cities followed by refills that can be done in each city in a new line

// Constraints

// 1 <= N <= 1000
// Output Format

// A single integer indicating the number of refills (minimum refills required to gro from source to destination).

// Ouptut 0 in case a solution is not possible.

// Sample Input 0

// 5
// 2 3 1 1 4
// Sample Output 0

// 2
// Explanation 0

// There are 5 cities. The refill in first city will last for 2 cities, the refill in second city will last for 3 cities and so on.

// The first refill happens at first city. We stop again at city two for next refill. With refills lasting for 3 more cities, we reach our destination. Hence the answer is 2.

// Note that there are many other combinations possible. We are looking for minimal hops. Though we are wasting one refill done at first location, stopping at second location was an optimal choice.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int jump(vector<int>& nums) {
    if(nums.size()<=1)
        return 0;
    if(nums[0]<=0)
        return -1;
    int curm=nums[0];
    int fuel=nums[0];
    int jump=1;
    for(int i=1;i<nums.size()-1;i++)
    {
        curm=max(curm,i+nums[i]);
        fuel--;
        if(fuel==0)
        {
            if(curm<=i)
               return 0;
            jump++;
            fuel=curm-i;
        }
    }
    return jump;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> arr;
    int n,temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    int res=jump(arr);
    cout<<res;
    return 0;
}
