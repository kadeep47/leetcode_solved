//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
        stack<char> st;
            int n=s.size();
            for(int i=0;i<n;i++)
            {
                if(s[i]!=']')st.push(s[i]);
                else 
                {
                    string temp="";
                    //removing until its alphabet 
                    while(!st.empty() and st.top()!='[')
                    {
                        temp+=st.top();
                        st.pop();
                    }
                    st.pop();// for removing  "]"
                    int num=0;
                    int mul=1;
                    //for removing to get required (integer) 
                    while(!st.empty() and st.top()>='0' and st.top()<='9')
                    {
                        num=mul*(st.top()-'0')+num;
                        st.pop();
                        mul*=10;
                    }
                    reverse(temp.begin(),temp.end());
                    string x="";
                    for(int i=0;i<num;i++)x+=temp;
                    //multiplying the cur string and putting back on stack for further process
                    for(int i=0;i<x.size();i++)
                    {
                        st.push(x[i]);
                    }
                }
            }
            //at last  answer will be there on stack  just take out and  reverse to get answer
            string ans="";
            while(!st.empty())
            {
                ans+=st.top();
                st.pop();
            }
            reverse(ans.begin(),ans.end());
            return ans;
    
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends