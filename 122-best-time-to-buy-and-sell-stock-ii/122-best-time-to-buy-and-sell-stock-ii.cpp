class Solution {
public:
    int maxProfit(vector<int>& p) {
        int pro =0 ;
        for(int i = 1;i < p.size();i++){
            if(p[i] > p[i-1]){
                pro +=  abs(p[i] - p[i-1]);
            }
        }
        return pro;
    }
};