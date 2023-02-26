//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    
    

string smallestNumber(int sum, int num){
        // code here 
    if(sum ==0){
            if(num==1){
            return "0";
            }
            else{
                return "-1";
            }
        }
        if(sum >9*num){
            return "-1";
        }
        else{
            string ans="";
            for(int i=1;i<num;i++){
                if(sum>9){
                    sum-=9;
                    ans+="9";
                }
                else{
                    ans += to_string(sum-1);
                    sum=1;
                }
            }
            ans += to_string(sum);
            reverse(ans.begin(),ans.end());
            return ans;
        }
}
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.smallestNumber(S,D) << endl;
    }
    return 0; 
} 
// } Driver Code Ends