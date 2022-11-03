class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i= 0;i<n;++i){
            mp[nums[i]]++;
        }
        int p ;
        
        // for(auto it : mp){
        //     cout << it.first<< " "<< it.second << endl;
        // }
        for(auto it :mp){
            if(it.second > n/2){
                
                cout << it.first << " "<< it.second<< endl;
                 p = it.first;
            }
        }
        
        return p;
        
    }
};