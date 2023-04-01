//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int a[], int n, int b[], int m)
	{
        // Your code goes here
        
         int sum1 = 0;
        int sum2 = 0;
        
        sort(a, a+n);
        sort(b, b+m);
        
        for(int i=0; i<n; i++){
            sum1 += a[i];
        }
        for(int i=0; i<m; i++){
            sum2 += b[i];
        }
        
        int diff = abs(sum1-sum2);
        
        if(diff == 0) return 1;
            
        int i=0, j=0;
        
        while(i< n && j<m){
            int temp1 = sum1-a[i]+b[j];
            int temp2 = sum2-b[j]+a[i];
            
            if(temp1 == temp2)
                return 1;
            
            if(temp2 < temp1)i++;
            else j++;
                
            
        }
        return -1;
	}
 

};

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}






// } Driver Code Ends