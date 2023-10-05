//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
long long int solve (string s, int k) {
    	//code here.
    	long long int ans=0;
    	int n=s.size();

    	int dc=0;
    	
    	int i=0;
    	
    	int j=0;
    	int freq_array[26]={0};
    	//increase size of window
    	while(j<n)
    	{
    	    
    	    freq_array[s[j]-'a']++;
    	    
    	    if(freq_array[s[j]-'a']==1)
    	    dc++;
    	    
    	    while(dc>k)
    	    {
    	        freq_array[s[i]-'a']--;
    	    
    	        if(freq_array[s[i]-'a']==0)
    	        dc--;
    	        
    	        i++;
    	    }
    	    ans=ans+(j-i+1);//why +1 -> aabc  => j-i+1=>3-1+1=>in total 3 differnt character from i to j
    	    j++;
    	}
    	
    	return ans;
    }
    
    
    long long int substrCount (string s, int k) 
    {
        
        return solve(s,k)-solve(s,k-1);
    }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends