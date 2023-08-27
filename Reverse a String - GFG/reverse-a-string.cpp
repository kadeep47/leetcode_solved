//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    string reverseWord(string str)
    {
        
          int n = str.size();
        for(int i=0; i<n/2 ; i++){
            str[i] = str[i]^str[n-1-i];
            str[n-1-i] = str[i]^str[n-1-i];
            str[i] = str[i]^str[n-1-i];
        }
        return str;
        
        
        // Your code goes here
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends