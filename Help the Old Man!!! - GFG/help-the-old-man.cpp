// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

void toi(int n , int src , int bet, int fin,vector<pair<int, int>> &ans){
    if(n ==0){
        return;
    }
    toi(n-1,src,fin,bet,ans);
    ans.push_back({src,fin});
    toi(n-1,bet,src,fin,ans);
}
    vector<int> shiftPile(int N, int n){
        // code here
        vector <pair<int ,int >>vi;

        toi(N,1,2,3,vi);
        return {vi[n-1].first,vi[n-1].second};
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, n;
        cin>>N>>n;
        
        Solution ob;
        vector<int> ans = ob.shiftPile(N, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends