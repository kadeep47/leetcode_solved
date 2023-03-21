//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
 
     long long solve(int x,int y,string s){
      //code here
      long long p=0,r=0,ans=0;
      
      if (x>y){
         string curr;
          
         for (int i=0; i<s.length(); i++){
             if (s[i]=='r'){
                 if (p && curr.back()=='p'){
                     p--;
                     curr.pop_back();
                     ans+=x;
                 }
                 else{
                     curr+=s[i];
                 }
             }
             else{
                 if (s[i]=='p'){
                     p++;
                     curr+=s[i];
                 }
                 else{
                     curr+=s[i];
                     p=0;
                 }
                 
             }
         }
         

         p=0,r=0;
         for (int i=0; i<curr.length(); i++){
            if (curr[i]=='p'){
                if (r){
                    r--;
                    ans+=y;
                }
                else{
                    p++;
                }
            }
            else if (curr[i]=='r'){
                if (p){
                    p--;
                    ans+=x;
                }
                else{
                    r++;
                }
            }
            else{
                p=0,r=0;
            }
         }
      }
      else{
          string curr;
          
         for (int i=0; i<s.length(); i++){
             if (s[i]=='p'){
                 if (r && curr.back()=='r'){
                     r--;
                     curr.pop_back();
                     ans+=y;
                 }
                 else{
                     curr+=s[i];
                 }
             }
             else{
                 if (s[i]=='r'){
                     r++;
                     curr+=s[i];
                 }
                 else{
                     curr+=s[i];
                     r=0;
                 }
                 
             }
         }
         
         p=0,r=0;
         for (int i=0; i<curr.length(); i++){
            if (curr[i]=='p'){
                if (r){
                    r--;
                    ans+=y;
                }
                else{
                    p++;
                }
            }
            else if (curr[i]=='r'){
                if (p){
                    p--;
                    ans+=x;
                }
                else{
                    r++;
                }
            }
            else{
                p=0,r=0;
            }
         }
      }
      
      return ans;
    }
};

//{ Driver Code Starts.
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int X,Y;
      cin>>X>>Y;
      string S;
      cin>>S;
      Solution obj;
      long long answer=obj.solve(X,Y,S);
      cout<<answer<<endl;
  }
}
// } Driver Code Ends