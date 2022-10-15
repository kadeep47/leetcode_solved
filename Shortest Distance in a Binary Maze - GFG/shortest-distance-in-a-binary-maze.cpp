//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++




class Solution {
  private:
    vector<int> dx={1,-1,0,0};
    vector<int> dy={0,0,1,-1};
    
  public:
  
    bool isSafe(int x, int y, int n, int m, vector<vector<int>> &grid){
        if(x<0 || x>=n || y<0 || y>=m || grid[x][y]!=1){
            return false;
        }
        return true;
    }
  
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> des) {
        
        if(source==des){
            return 0;
        }
        int n=grid.size();
        int m=grid[0].size();
        
        queue<vector<int>> q;
        q.push({source.first,source.second});
        grid[source.first][source.second]=0;
        int ans=0;
        while(!q.empty()){
            ans++;
            auto si=q.size();
            while(si--){
                auto temp=q.front();
                q.pop();
                int x=temp[0], y=temp[1];
                for(int i=0;i<4;i++){
                    if(isSafe(x+dx[i],y+dy[i],n,m,grid)){
                        if(des.first==x+dx[i] && des.second==y+dy[i]){
                            return ans;
                        }
                        grid[x+dx[i]][y+dy[i]]=0;
                        q.push({x+dx[i],y+dy[i]});
                    }
                }
            }
        }
        return -1;
    }
};



//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends