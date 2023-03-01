//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int a[], int b[], int n)
    {
        if(n==0) return 0;
    	// Your code here
    // 	vector <int> a;
    // 	for(int i =0;i<n;i++){
    // 	    a.push_back(arr[i]);
    // 	}
    	
    // 	vector <int> b;
    // 	for(int i =0;i<n;i++){
    // 	    b.push_back(dep[i]);
    // 	}
    //  	sort(a.begin(),a.end());
    // 	sort(b.begin(),b.end());
    
    
    sort(a,a+n);sort(b,b+n);
    
    	int i =1;
    	int j =0;
    	int cnt =1 ;
    	int ans = 0;
    	while((i < n ) && (j<n)){
    	    if(a[i] <= b[j]){
    	        i++;
    	        cnt++;
    	    }else{
    	        j++;
    	        cnt--;
    	    }
    	    ans = max(ans,cnt);
    	}
    	
    	return ans ;
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends