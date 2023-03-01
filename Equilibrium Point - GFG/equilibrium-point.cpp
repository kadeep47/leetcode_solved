//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n == 1) return 1;
        
        int lo =0 ;
        int hi = n-1;
        
        int bsum = 0;
        int esum = 0;
        while(lo < hi){
            if(bsum < esum){
                // cout <<"b"<< " "<<a[lo] <<endl;
                bsum+= a[lo];
                lo++;
            }else{
                // cout <<"e"<< " "<<a[hi] <<endl;
                esum += a[hi];
                hi--;
            }
        }
        // cout << lo << " " << hi  <<endl;
        // cout << bsum  << " " << esum  <<endl;
        
        if(bsum ==esum){
            return hi+1;
        }
        
        
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends