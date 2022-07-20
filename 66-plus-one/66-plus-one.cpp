class Solution {
public:
    vector<int> plusOne(vector<int>& di) {
        vector<int> ans;
        int rem = 1;
        
        for(int i=di.size()-1;i>=0;i--){
            int num = di[i] + rem;
            
            int m = num % 10;
            ans.push_back(m);
            rem = num / 10;
        }
        
        if(rem){
            ans.push_back(rem);
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};