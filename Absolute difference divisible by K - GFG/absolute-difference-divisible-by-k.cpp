//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        // code here
       int cnt =0;
        unordered_map<int,int>mp;
        for(int i =0;i<n;++i){
           arr[i]%=k;
           mp[arr[i]]++;
        }
        
        // for(auto it : mp){
        //     cout << it.first << " - "<<it.second << endl;
        // }
        
        for(auto it :  mp){
            int k = it.second;
            k = k* (k-1);
            cnt +=  k/2;
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n;
        
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        cin>>k;

        Solution ob;
        cout << ob.countPairs(n,arr,k) << endl;
    }
    return 0;
}
// } Driver Code Ends