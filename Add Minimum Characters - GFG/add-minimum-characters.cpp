//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int addMinChar(string str){    
        //code here
        
         int i=0;
    int j=str.size()-1;
    int cnt=0;
    while(i<=j)
    {
        if(str[j]==str[i])
        {
            if(i==j){cnt++;break;}
            i++;j--;cnt+=2;continue;
        }
        else
        {
            cnt=0;
            if(i!=0){i=0;continue;}
            j--;
        }
    }
    return str.size()-cnt;
    
        
    }
};

//{ Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 
// } Driver Code Ends