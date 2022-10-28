//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
	public:

int mod =1e9 +7;
		int NthTerm(int n){
		    long long int i=1,t=2,inc=2;
		    while(i<n){
		        t=((t*inc)+1)%mod;
		        i++;
		        inc++;
		    }
		    return t;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution obj;
		int ans = obj.NthTerm(n);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends