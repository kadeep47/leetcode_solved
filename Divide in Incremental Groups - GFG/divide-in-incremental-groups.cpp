//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int helper(int start,int target,int N,int K,vector<vector<vector<int>>>& dp){
        
        if(K==0){
            if(target==0) return 1;
            else          return 0;
        }
       if(target<0) return 0;
       if(dp[start][target][K]!=-1) return dp[start][target][K];

       int cnt=0;
       for(int val=start;val<=N;++val){
           cnt+=helper(val,target-val,N,K-1,dp);
        }
    
        return dp[start][target][K]=cnt;
    }
  
    int countWaystoDivide(int N, int K) {
        // Code here
        vector<vector<vector<int>>> dp(N+1,vector<vector<int>> (N+1,vector<int> (K+1,-1)));
        return helper(1,N,N,K,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        Solution ob;
        cout << ob.countWaystoDivide(N, K) << endl;
    }
}
// } Driver Code Ends