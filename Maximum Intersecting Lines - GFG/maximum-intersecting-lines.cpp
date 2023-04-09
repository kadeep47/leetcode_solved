//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxIntersections(vector<vector<int>> lines, int N) {
        // Code here
        
        
        
        vector<pair<int,int>> events;
    for(int i = 0; i < N; i++) {
        events.push_back({lines[i][0], 1});
        events.push_back({lines[i][1]+1, -1});
    }
    sort(events.begin(), events.end());

    int maxIntersect = 0, intersect = 0;
    for(int i = 0; i < events.size(); i++) {
        intersect += events[i].second;
        maxIntersect = max(maxIntersect, intersect);
    }
    return maxIntersect;
    
    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> mat(N, vector<int>(2));
        for (int j = 0; j < 2; j++) {
            for (int i = 0; i < N; i++) {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        cout << obj.maxIntersections(mat, N) << endl;
    }
}
// } Driver Code Ends