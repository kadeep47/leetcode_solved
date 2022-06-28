class Solution {
public:
    int maximumDifference(vector<int>& v) {
        int n =  v.size();
        int mi[n];
        mi[0] = v[0];
        for(int i =1;i < n;i++){
            mi[i] = min(v[i],mi[i-1]);
        }
        int pro =-1  ;
        for(int i =1;i < n;i++){
            pro = max(pro, (v[i] - mi[i]));
        }
        if(pro == 0)return -1;
        else return pro;
        
    }
};