//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > mat, int n)
    {
        // https://practice.geeksforgeeks.org/problems/make-matrix-beautiful-1587115620/1
          int ans= 0 ;
        int sum_in_mat =0 ;
        
        for(int i =0;i<n;i++){
            int sum1 = 0;
            int sum2 =0;
            for(int j = 0;j<n;j++){
                sum1+=mat[i][j];
                sum2+=mat[j][i];
            }
            ans= max(ans,max(sum1,sum2));
            sum_in_mat += sum1;
        }
        
        return (( ans * n ) - sum_in_mat);
        // code here 
    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends