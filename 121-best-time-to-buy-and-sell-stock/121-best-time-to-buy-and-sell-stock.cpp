class Solution {
public:
    int maxProfit(vector<int>& v) {
        int pro =0 ;
        int mi = v[0];
        for(int i =0 ;i < v.size();i++){
            mi = min(mi,v[i]);
            pro =  max(pro,(v[i] - mi));
        }
        return pro;
        
    }
};