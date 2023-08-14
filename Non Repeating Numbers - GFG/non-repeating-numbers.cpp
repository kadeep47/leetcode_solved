//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        
          int n= nums.size();
        int x = nums[0];
        for(int i =1;i<n;i++){
            x ^= nums[i];
        }
        
        int ind ;
        for(int i=0;i<31;i++){
            if(x & (1<<i)) {ind =i;break;}
        }
        
        int a =0 ;
        int b =0;
        for(int i =0 ;i<n;i++){
            if((1<<ind) & nums[i]) a^=nums[i];
            else b^= nums[i];
        }
        
        vector <int> v;
        if(a>b)swap(a,b);
        v.push_back(a);v.push_back(b);
        
        
        return v;
        
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends