//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

class Shop
{
    vector<int> chocolates;
    int countOfCalls;
    public:
    Shop()
    {
        countOfCalls = 0;
    }
    void addChocolate(int x)
    {
        chocolates.push_back(x);
    }
    long long get(int i)
    {
        countOfCalls++;
        if(i<0 || i>=(int)chocolates.size() || countOfCalls>50)return -1;
        return chocolates[i];
    }
};


// } Driver Code Ends
//User function Template for Java

/*
Instructions - 

    1. 'shop' is object of class Shop.
    2. User 'shop.get(int i)' to enquire about the price
            of the i^th chocolate.
    3. Every chocolate in shop is arranged in increasing order
            i.e. shop.get(i) <= shop.get(i + 1) for all 0 <= i < n - 1
*/


#define ll long long int
class Solution{
    
     Shop shop;
    public:
    Solution(Shop s)
    {
        this->shop = s;
    }
    long long find(int n, long k){
        ll low=0,mid,high=n-1,curPrice,price,j,x,count=0;
        while(k>0)
        {
            price = -1;
            while(low<=high)
            {
                mid = low + (high-low)/2;
                curPrice = shop.get(mid);
                if(curPrice<=k)
                {
                    price = curPrice;
                    j = mid;
                    low = mid+1;
                }
                else
                    high = mid-1;
            }
            if(price==-1)
                break;
            x = k/price;
            count += x;
            k -= (x*price);
            low = 0,high=j-1;
        }
        return count;
    }
};




//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        long long k;
        cin >> k;
        
        Shop shop;
        for(int i = 0; i<n; i++)
        {
            int x;
            cin >> x;
            shop.addChocolate(x);
        }
        
        Solution obj(shop);
        long long res = obj.find(n, k);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends