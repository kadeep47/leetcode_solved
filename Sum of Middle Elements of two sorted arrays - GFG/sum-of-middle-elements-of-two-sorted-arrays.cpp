//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int a1[], int a2[], int n) {
            // code here 
            
             vector<int>v;
            for(int i=0;i<n;i++)
            {
                v.push_back(a1[i]);
            }
            for(int i=0;i<n;i++)
            {
                v.push_back(a2[i]);
            }
            sort(v.begin(),v.end());
            int temp=v[v.size()/2]+v[(v.size()/2)-1];
            return temp;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends