//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        // Code here
        
              int n= matrix.size();
        int m = matrix[0].size();
        int delrow[] = {-1,0,1,0,-1,-1,1,1};
        int delcol[] = {0,-1,0,1,-1,1,-1,1};
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(matrix[i][j]==1)
                {
                    int count_zero = 0;
                    for(int k=0; k<8; k++)
                    {
                        int newrow = i + delrow[k];
                        int newcol = j + delcol[k];
                        if((newrow>=0 && newrow<n && newcol>=0 && newcol<m) && matrix[newrow][newcol]==0)
                        {
                            count_zero++;
                        }
                    }
                    if((count_zero%2==0) && (count_zero!=0))
                        ans++;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends