// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  string toBinary(int n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}
    int setBits(int N) {
        // Write Your Code here
        string f =  toBinary( N);
        // cout << f<< endl;
        int cnt = count(f.begin(),f.end(),'1');
        return cnt;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}
  // } Driver Code Ends