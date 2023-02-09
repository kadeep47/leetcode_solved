//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


class Solution{
    // vector<int> mp(26, 0);
public:
    int maxInstance(string s)
    {
        unordered_map<char,int>mp;
        for( char c:s)
        {
            mp[c]++;
        }
        int mini=INT_MAX;
        string str="balon";
        for(char c:str)
        {
          if(c=='l' || c=='o')  mp[c]=mp[c]/2;
          mini=min(mini,mp[c]);
        }
        return mini;
    }
};



//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends