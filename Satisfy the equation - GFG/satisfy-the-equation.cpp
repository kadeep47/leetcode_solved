//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> satisfyEqn(int a[], int n) {
        // code here
        vector <vector <int> >re;
        
        unordered_map <int,pair<int,int>> mp;
        for(int i =0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum = a[i] + a[j];
                auto it = mp.find(sum);
                if(it == mp.end()){
                    mp[sum]  = make_pair(i,j);
                }else{
                    pair<int ,int>p = mp[sum];
                    if(i!=p.first and i!=p.second and j!=p.second and j!=p.first )
                    re.push_back({p.first,p.second,i,j});
                }
            }
        }
        if(re.size() == 0){
            re.push_back({-1,-1,-1,-1});
        }
        sort(re.begin(),re.end());
        
        return re[0];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        vector<int> ptr = ob.satisfyEqn(A,N);
        
        cout<<ptr[0]<<" "<<ptr[1]<<" "<<ptr[2]<<" "<<ptr[3]<<endl;
    }
    return 0;
}
// } Driver Code Ends