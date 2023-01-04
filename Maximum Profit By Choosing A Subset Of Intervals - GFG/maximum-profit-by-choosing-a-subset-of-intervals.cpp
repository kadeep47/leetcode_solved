//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int maximum_profit(int n, vector<vector<int>> &intervals) {
        // Write your code here.
        int index;
        vector<int> toFind;
        sort(intervals.begin(),intervals.end());
        for(int i=n-2;i>=0;i--){
            toFind = {intervals[i][1],INT_MIN,INT_MIN};
            index = lower_bound(intervals.begin(),intervals.end(),toFind)-intervals.begin();
            intervals[i][2] = index == n ? max(intervals[i][2],intervals[i+1][2]) : max(intervals[i][2]+intervals[index][2],intervals[i+1][2]);
        } return intervals[0][2];
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> intervals(n, vector<int>(3));
        for (int i = 0; i < n; i++) {
            cin >> intervals[i][0] >> intervals[i][1] >> intervals[i][2];
        }
        Solution obj;
        cout << obj.maximum_profit(n, intervals) << endl;
    }
    return 0;
}

// } Driver Code Ends