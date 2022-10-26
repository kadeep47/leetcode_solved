//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int findMin(int n, char a[]){
        // code here
        if(count(a, a + n, a[0]) == n) return n;
        int r = count(a, a + n, 'R');
        int g = count(a, a + n, 'G');
        int b = count(a, a + n, 'B');
        return (r % 2 == 0 and g % 2 == 0 and b % 2 == 0) or (r % 2 == 1 and g % 2 == 1 and b % 2 == 1) ? 2 : 1;
    }
  //  }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        cout<<ob.findMin(n, a)<<"\n";
    }
    return 0;
}
// } Driver Code Ends