//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minVal(int a, int b) {
int k=a;
int s=b;
        int ans = a;
        int cnt = 0;
        int cnt2 =0 ;
        
        while(a !=0 ){
            ++cnt;
            a=(a&(a-1));
        }
        // cout << " " <<cnt << endl;
        while(b !=0 ){
            ++cnt2;
            b=(b&(b-1));
        }
        // cout << " " <<cnt2 << endl;
        int i =0;
        
        
        if(cnt>cnt2){
            int rep = cnt-cnt2;
            // cout << "here1 ";
            while(rep-- ){
                ans =  (ans & (ans-1));
            }
        }else if(cnt == cnt2){
            ans = k;
        }else{
            int rep = cnt2-cnt;
                //   cout << "here1 ";
            while(rep>0){
                int mas = 1<< i ;
                // cout << rep  <<endl;
                if((mas | ans)!= ans){
                    // cout << mas << "mas  "  <<  ans  <<endl;
                    ans = mas|ans ;
                    rep--;
                }
                i++;
            }
        }
        return ans ;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends