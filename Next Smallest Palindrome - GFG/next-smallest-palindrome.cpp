//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> generateNextPalindrome(int num[], int n) {
	    // code here
	    
	      vector<int> a(n);
	    for(int i=0;i<n;i++) a[i] = num[i];
	    reverse(a.begin(),a.end());
	    int c = 1;
	    for(int i=0;i<n;i++){
	        if(!c) break;
	        a[i] = (a[i] + 1) % 10;
	        if(a[i]) c = 0;
	    }
	    if(c) a.push_back(1);
	    n = a.size();
	    int i=(n-2)/2;
	    while(i>=0 && a[i] == a[n - i - 1]) --i;
	    if(i < 0) return a;
	    if(a[i] > a[n-i-1]){
	        int idx = n - 1 - (n-1) / 2;
	        c = 1;
	        for(;idx<n;idx++){
	            if(!c) break;
	            a[idx] = (a[idx] + 1) % 10;
	            if(a[idx]) c = 0;
	        }
	        if(c) a.push_back(1);
	        n = a.size();
	    }
        for(int j=(n-1)/2;j>=0;j--) a[j] = a[n-j-1];
        reverse(a.begin(),a.end());
        return a;
        
        
        
	}

};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int num[n];
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        Solution ob;
        auto ans = ob.generateNextPalindrome(num, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends