//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    /*You are required to complete below function */
  string multiplyStrings(string s1, string s2) {
        bool ekorchecker=false;
         if(s1[0]=='-'){
            s1.erase(s1.begin());
            ekorchecker=!ekorchecker;
        }
        if(s2[0]=='-'){
            s2.erase(s2.begin());
            ekorchecker=!ekorchecker;
        }
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        string s="";
        // return s2;
        for(int i=0;i<s1.size();i++){
            int k=((int)(s1[i])-48);
            string temp="";
            int cnt=0;
            for(int j=0;j<s2.size();j++){
                int val=((int)(s2[j])-48);
                int ans=(val*k)+cnt;
                if(ans>=10){
                    cnt=ans/10;
                    temp.push_back((char)((ans%10)+48));
                }
                else{
                    cnt=0;
                    temp.push_back((char)(ans+48));
                }
            }
            if(cnt>0){
            temp.push_back((char)(cnt+48));
            }
            reverse(temp.begin(),temp.end());
            for(int v=0;v<i;v++)
            temp.push_back('0');
            string frzi="";
            int x=s.size()-1;
            int y=temp.size()-1;
            cnt=0;
            while(x>=0 and y>=0){
                int k=(int)(s[x]-48);
                int l=(int)(temp[y]-48);
                int val=k+l+cnt;
                if(val>=10){
                    cnt=val/10;
                    frzi.push_back((char)((val%10)+48));
                }
                else{
                    cnt=0;
                    frzi.push_back((char)(val+48));
                }
                x--;
                y--;
            }
            // cout<<temp<<" "<<frzi<<endl;
            while(x>=0){
                 int k=(int)(s[x]-48);
                int ans=k+cnt;
                 if(ans>=10){
                    cnt=ans/10;
                    frzi.push_back((char)((ans%10)+48));
                }
                else{
                    cnt=0;
                    frzi.push_back((char)(ans+48));
                }
                x--;
            }
            
            while(y>=0){
                
                int l=(int)(temp[y]-48);
                int ans=l+cnt;
                 if(ans>=10){
                    cnt=ans/10;
                    frzi.push_back((char)((ans%10)+48));
                }
                else{
                    cnt=0;
                    frzi.push_back((char)(ans+48));
                }
                y--;
            }

            if(cnt>0){
            frzi.push_back((char)(cnt+48));
            }
                         
            reverse(frzi.begin(),frzi.end());
            s=frzi;
            
          
        }
        while(s[0]=='0'){
            s.erase(s.begin());
        }
        if(ekorchecker==true){
            s.insert(s.begin(),'-');
        }
         return s;
    }

};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends