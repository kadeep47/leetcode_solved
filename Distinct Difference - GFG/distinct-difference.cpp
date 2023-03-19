//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    vector<int> getDistinctDifference(int N, vector<int> &A) {
        // code here
        int maxi = 0;
        for(int i = 0; i < N; i++)
        {
            if(maxi<A[i])
            {
                maxi = A[i];
            }
        }
        vector<int> left(maxi+1,0);
        vector<int> right(maxi+1,0);
        for(int j = 0; j < N; j++)
        {
            right[A[j]]++;
        }
        vector<int> ans;
        int leftcount = 0;
        int rightcount = 0;
        for(int k = 0; k < maxi+1; k++)
        {
            if(right[k]>0)
            {
                rightcount++;
            }
        }
        int count = 0;
        for(int l = 0; l < N; l++)
        {
            if(right[A[l]]==1)
            {
                rightcount--;
            }
            count = leftcount - rightcount;
            ans.push_back(count);
            if(left[A[l]]==0)
            {
                leftcount++;
            }
            right[A[l]]--;
            left[A[l]]++;
            
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        vector<int> res = obj.getDistinctDifference(N, A);
        
        Array::print(res);
        
    }
}

// } Driver Code Ends