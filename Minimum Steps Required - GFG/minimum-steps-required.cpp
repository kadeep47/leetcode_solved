//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string s) {
    // Write your code here.
    
      int ca=0, cb=0;
    for(int i=1; i<s.size(); i++){
        if(s[i-1]=='a'&&s[i]=='b'){
            ca++;
        }
        else if(s[i-1]=='b'&&s[i]=='a'){
            cb++;
        }
    }
    if(s[s.size()-1]=='a') ca++;
    else cb++;
    return min(ca,cb)+1;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends