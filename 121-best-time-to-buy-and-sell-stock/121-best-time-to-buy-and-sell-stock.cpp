class Solution {
public:
    int maxProfit(vector<int>& v) {
        int ma =0 ;
        int lowest = INT_MAX;
        for(int j  =0; j<v.size();j++){
            lowest =  min(lowest,v[j]);
            ma = max(ma,( v[j] - lowest));
            }
        return ma;
    }
};