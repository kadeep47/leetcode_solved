//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
          int len = w.size();
        map<char, int> m;

        vector<int> v(len);

        for (int i = 0; i < n; i++)
            m[x[i]] = b[i];

        for (int i = 0; i < len; i++)
        {
            if (m.find(w[i]) == m.end())
            {
                m[w[i]] = int(w[i]);
            }
        }

        for (int i = 0; i < len; i++)
        {
            v[i] = m[w[i]];
        }

        string t = "", ans;
        int sum = 0, max = INT_MIN;

        for (int i = 0; i < len; i++)
        {
            sum += v[i];
            t += w[i];

            if (max < sum)
            {
                max = sum;
                ans = t;
            }

            if (sum < 0)
            {
                sum = 0;
                t = "";
            }
        }
        return ans;  
      }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends