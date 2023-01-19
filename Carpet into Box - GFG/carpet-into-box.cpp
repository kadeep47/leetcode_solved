//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        //code here
        int a=A,b=B,c=C,d=D;

        int cnt1=0;

        while(a>c){ a= a/2; cnt1++; }

        while(b>d){ b= b/2; cnt1++; }

        int cnt2=0;

        a=A,b=B;

        while(b>c){ b= b/2; cnt2++; }

        while(a>d){ a= a/2; cnt2++; }

        return min(cnt1,cnt2);
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends