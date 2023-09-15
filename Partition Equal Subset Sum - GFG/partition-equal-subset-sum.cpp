//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int N, int arr[])
    {
        // code here
        
         int totalSum = 0;
        for (int i = 0; i < N; i++)
            totalSum += arr[i];

        // If the total sum is odd, it cannot be divided into two equal sum subsets
        if (totalSum % 2 != 0)
            return 0;

        int targetSum = totalSum / 2;

        // dp[i][j] will be true if there is a subset of elements from arr[0....i-1]
        // with sum equal to j
        vector<vector<bool>> dp(N + 1, vector<bool>(targetSum + 1, false));

        // An empty subset can always have a sum of 0
        for (int i = 0; i <= N; i++)
            dp[i][0] = true;

        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= targetSum; j++) {
                // If the current element is greater than the target sum, it cannot be included in the subset
                if (arr[i - 1] > j)
                    dp[i][j] = dp[i - 1][j];
                else
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
            }
        }

        return dp[N][targetSum] ? 1 : 0;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends