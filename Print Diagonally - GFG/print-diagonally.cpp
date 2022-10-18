//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> v)
	{
		// Your code goes here
		vector <int > vv;
		int ma =  2*(n-1);

		for(int sum =0;sum<=ma;sum++){
		    for(int p = 0;p<= sum;p++){
		        int q = sum -p;
		        if(p <= (n-1) && q<= (n-1)){
		          vv.push_back(v[p][q]);
		        }
		    }
		}
		return vv;
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends